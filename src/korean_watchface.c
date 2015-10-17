#include <pebble.h>
#include <words.h>
  
static Window *s_main_window;

static GBitmap *s_hour_1_bitmap;
static BitmapLayer *s_hour_1_layer;

// char month_words[4][16];

static void log_time_details(struct tm *tick_time) {
  APP_LOG(APP_LOG_LEVEL_INFO, "Hour: %d", tick_time->tm_hour);
  APP_LOG(APP_LOG_LEVEL_INFO, "Minutes: %d", tick_time->tm_min);
  APP_LOG(APP_LOG_LEVEL_INFO, "Month: %d", tick_time->tm_mon);
  APP_LOG(APP_LOG_LEVEL_INFO, "Day: %d", tick_time->tm_mday);
  APP_LOG(APP_LOG_LEVEL_INFO, "Day of week: %d", tick_time->tm_wday);
}

static void update_time() {
  // Get a tm structure
  time_t temp = time(NULL);
  struct tm *tick_time = localtime(&temp);
  log_time_details(tick_time);

  month_in_words(tick_time->tm_mon);
  APP_LOG(APP_LOG_LEVEL_INFO, month_words[1]);

  // Create GBitmap, then set to created BitmapLayer
  s_hour_1_bitmap = gbitmap_create_with_resource(RESOURCE_ID_A);
  s_hour_1_layer = bitmap_layer_create(GRect(6, 0, 33, 33));
  bitmap_layer_set_bitmap(s_hour_1_layer, s_hour_1_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_hour_1_layer));
}

static void main_window_load(Window *window) {
  window_set_background_color(window, GColorBlack); 
}

static void main_window_unload(Window *window) {
  // Destroy GBitmap
  gbitmap_destroy(s_hour_1_bitmap);

  // Destroy BitmapLayer
  bitmap_layer_destroy(s_hour_1_layer);
}

static void tick_handler(struct tm *tick_time, TimeUnits units_changed) {
  update_time();
}
  
static void init() {
  // Create main Window element and assign to pointer
  s_main_window = window_create();

  // Set handlers to manage the elements inside the Window
  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload
  });

  // Show the Window on the watch, with animated=true
  window_stack_push(s_main_window, true);
  
  // Register with TickTimerService
  tick_timer_service_subscribe(MINUTE_UNIT, tick_handler);
}

static void deinit() {
  // Destroy Window
  window_destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}