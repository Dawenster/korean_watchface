#include <pebble.h>
  
static Window *s_main_window;

static GBitmap *s_hour_1_bitmap;
static BitmapLayer *s_hour_1_layer;

static void update_time() {
  // Get a tm structure
  time_t temp = time(NULL); 
  struct tm *tick_time = localtime(&temp);

  // Create a long-lived buffer
  static char buffer[] = "00:00";

  // Write the current hours and minutes into the buffer
  if(clock_is_24h_style() == true) {
    //Use 2h hour format
    strftime(buffer, sizeof("00:00"), "%H:%M", tick_time);
  } else {
    //Use 12 hour format
    strftime(buffer, sizeof("00:00"), "%I:%M", tick_time);
  }
}

static void main_window_load(Window *window) {
  window_set_background_color(window, GColorBlack);

  // Create GBitmap, then set to created BitmapLayer
  s_hour_1_bitmap = gbitmap_create_with_resource(RESOURCE_ID_A);
  s_hour_1_layer = bitmap_layer_create(GRect(6, 0, 33, 33));
  bitmap_layer_set_bitmap(s_hour_1_layer, s_hour_1_bitmap);
  layer_add_child(window_get_root_layer(window), bitmap_layer_get_layer(s_hour_1_layer));
  
  // Make sure the time is displayed from the start
  update_time();
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