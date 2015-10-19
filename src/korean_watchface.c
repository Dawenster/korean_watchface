#include <pebble.h>
#include <hour.h>
#include <minute.h>
  
static Window *s_main_window;

static GBitmap *s_hour_1_bitmap;
static BitmapLayer *s_hour_1_layer;
static GBitmap *s_hour_2_bitmap;
static BitmapLayer *s_hour_2_layer;
static GBitmap *s_hour_3_bitmap;
static BitmapLayer *s_hour_3_layer;

static GBitmap *s_minute_1_bitmap;
static BitmapLayer *s_minute_1_layer;
static GBitmap *s_minute_2_bitmap;
static BitmapLayer *s_minute_2_layer;
static GBitmap *s_minute_3_bitmap;
static BitmapLayer *s_minute_3_layer;
static GBitmap *s_minute_4_bitmap;
static BitmapLayer *s_minute_4_layer;

static GBitmap *s_wday_1_bitmap;
static BitmapLayer *s_wday_1_layer;
static GBitmap *s_wday_2_bitmap;
static BitmapLayer *s_wday_2_layer;
static GBitmap *s_wday_3_bitmap;
static BitmapLayer *s_wday_3_layer;

static GBitmap *s_month_1_bitmap;
static BitmapLayer *s_month_1_layer;
static GBitmap *s_month_2_bitmap;
static BitmapLayer *s_month_2_layer;
static GBitmap *s_month_3_bitmap;
static BitmapLayer *s_month_3_layer;

static GBitmap *s_day_1_bitmap;
static BitmapLayer *s_day_1_layer;
static GBitmap *s_day_2_bitmap;
static BitmapLayer *s_day_2_layer;
static GBitmap *s_day_3_bitmap;
static BitmapLayer *s_day_3_layer;
static GBitmap *s_day_4_bitmap;
static BitmapLayer *s_day_4_layer;

static void log_time_details(struct tm *tick_time) {
  APP_LOG(APP_LOG_LEVEL_INFO, "******************************");
  APP_LOG(APP_LOG_LEVEL_INFO, "Hour: %d", tick_time->tm_hour);
  APP_LOG(APP_LOG_LEVEL_INFO, "Minutes: %d", tick_time->tm_min);
  APP_LOG(APP_LOG_LEVEL_INFO, "Month: %d", tick_time->tm_mon);
  APP_LOG(APP_LOG_LEVEL_INFO, "Day: %d", tick_time->tm_mday);
  APP_LOG(APP_LOG_LEVEL_INFO, "Day of week: %d", tick_time->tm_wday);
}

static void set_hour() {
  s_hour_1_bitmap = gbitmap_create_with_resource(hour_char_1);
  s_hour_1_layer = bitmap_layer_create(GRect(6, 0, 33, 33));
  bitmap_layer_set_bitmap(s_hour_1_layer, s_hour_1_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_hour_1_layer));

  s_hour_2_bitmap = gbitmap_create_with_resource(hour_char_2);
  s_hour_2_layer = bitmap_layer_create(GRect(39, 0, 33, 33));
  bitmap_layer_set_bitmap(s_hour_2_layer, s_hour_2_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_hour_2_layer));

  s_hour_3_bitmap = gbitmap_create_with_resource(hour_char_3);
  s_hour_3_layer = bitmap_layer_create(GRect(72, 0, 33, 33));
  bitmap_layer_set_bitmap(s_hour_3_layer, s_hour_3_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_hour_3_layer));
}

static void set_minute() {
  s_minute_1_bitmap = gbitmap_create_with_resource(minute_char_1);
  s_minute_1_layer = bitmap_layer_create(GRect(6, 33, 33, 33));
  bitmap_layer_set_bitmap(s_minute_1_layer, s_minute_1_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_minute_1_layer));

  s_minute_2_bitmap = gbitmap_create_with_resource(minute_char_2);
  s_minute_2_layer = bitmap_layer_create(GRect(39, 33, 33, 33));
  bitmap_layer_set_bitmap(s_minute_2_layer, s_minute_2_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_minute_2_layer));

  s_minute_3_bitmap = gbitmap_create_with_resource(minute_char_3);
  s_minute_3_layer = bitmap_layer_create(GRect(72, 33, 33, 33));
  bitmap_layer_set_bitmap(s_minute_3_layer, s_minute_3_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_minute_3_layer));

  s_minute_4_bitmap = gbitmap_create_with_resource(minute_char_4);
  s_minute_4_layer = bitmap_layer_create(GRect(105, 33, 33, 33));
  bitmap_layer_set_bitmap(s_minute_4_layer, s_minute_4_bitmap);
  layer_add_child(window_get_root_layer(s_main_window), bitmap_layer_get_layer(s_minute_4_layer));
}

static void dump_characters() {
  // Destroy GBitmap
  gbitmap_destroy(s_hour_1_bitmap);
  gbitmap_destroy(s_hour_2_bitmap);
  gbitmap_destroy(s_hour_3_bitmap);
  gbitmap_destroy(s_minute_1_bitmap);
  gbitmap_destroy(s_minute_2_bitmap);
  gbitmap_destroy(s_minute_3_bitmap);
  gbitmap_destroy(s_minute_4_bitmap);
  gbitmap_destroy(s_wday_1_bitmap);
  gbitmap_destroy(s_wday_2_bitmap);
  gbitmap_destroy(s_wday_3_bitmap);
  gbitmap_destroy(s_month_1_bitmap);
  gbitmap_destroy(s_month_2_bitmap);
  gbitmap_destroy(s_month_3_bitmap);
  gbitmap_destroy(s_day_1_bitmap);
  gbitmap_destroy(s_day_2_bitmap);
  gbitmap_destroy(s_day_3_bitmap);
  gbitmap_destroy(s_day_4_bitmap);

  // Destroy BitmapLayer
  bitmap_layer_destroy(s_hour_1_layer);
  bitmap_layer_destroy(s_hour_2_layer);
  bitmap_layer_destroy(s_hour_3_layer);
  bitmap_layer_destroy(s_minute_1_layer);
  bitmap_layer_destroy(s_minute_2_layer);
  bitmap_layer_destroy(s_minute_3_layer);
  bitmap_layer_destroy(s_minute_4_layer);
  bitmap_layer_destroy(s_wday_1_layer);
  bitmap_layer_destroy(s_wday_2_layer);
  bitmap_layer_destroy(s_wday_3_layer);
  bitmap_layer_destroy(s_month_1_layer);
  bitmap_layer_destroy(s_month_2_layer);
  bitmap_layer_destroy(s_month_3_layer);
  bitmap_layer_destroy(s_day_1_layer);
  bitmap_layer_destroy(s_day_2_layer);
  bitmap_layer_destroy(s_day_3_layer);
  bitmap_layer_destroy(s_day_4_layer);
}

static void update_time() {
  // Get a tm structure
  time_t temp = time(NULL);
  struct tm *tick_time = localtime(&temp);
  log_time_details(tick_time);

  dump_characters();

  set_hour_chars(tick_time->tm_hour);
  set_hour();

  set_minute_chars(tick_time->tm_min);
  set_minute();
}

static void main_window_load(Window *window) {
  window_set_background_color(window, GColorBlack); 
  update_time();
}

static void main_window_unload(Window *window) {
  dump_characters();
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