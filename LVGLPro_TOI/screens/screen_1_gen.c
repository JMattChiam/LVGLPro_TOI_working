/**
 * @file screen_1_gen.c
 * @brief Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/

#include "screen_1_gen.h"
#include "../LVGLPro_TOI.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * screen_1_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");


    static bool style_inited = false;

    if (!style_inited) {

        style_inited = true;
    }

    lv_obj_t * lv_obj_0 = lv_obj_create(NULL);
    lv_obj_set_name_static(lv_obj_0, "screen_1_#");

    lv_obj_bind_style(lv_obj_0, &style_dark_mode, 0, &is_dark_mode, 1);
    lv_obj_bind_style(lv_obj_0, &style_light_mode, 0, &is_dark_mode, 0);
    lv_obj_t * temperature_setting_room1 = temperature_setting_create(lv_obj_0);
    lv_obj_set_name(temperature_setting_room1, "temperature_setting_room1");
    lv_obj_set_align(temperature_setting_room1, LV_ALIGN_CENTER);

    lv_obj_t * lv_label_0 = lv_label_create(lv_obj_0);
    lv_label_set_text(lv_label_0, "Room 1");
    lv_obj_set_align(lv_label_0, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_label_0, 20);
    lv_obj_set_style_text_font(lv_label_0, font_large, 0);

    lv_obj_t * lv_button_0 = lv_button_create(lv_obj_0);
    lv_obj_set_align(lv_button_0, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_y(lv_button_0, -50);
    lv_obj_t * lv_label_1 = lv_label_create(lv_button_0);
    lv_label_set_text(lv_label_1, "Toggle style");

    lv_obj_add_subject_toggle_event(lv_button_0, &is_dark_mode, LV_EVENT_CLICKED);

    lv_obj_t * lv_button_1 = lv_button_create(lv_obj_0);
    lv_obj_set_align(lv_button_1, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_set_y(lv_button_1, -50);
    lv_obj_set_x(lv_button_1, 20);
    lv_obj_add_event_cb(lv_button_1, led_callback, LV_EVENT_CLICKED, "5");
    lv_obj_t * lv_label_2 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_2, "Blink LED");

    lv_obj_t * lv_label_3 = lv_label_create(lv_obj_0);
    lv_label_bind_text(lv_label_3, &application_uptime, "%d s");
    lv_obj_set_align(lv_label_3, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_set_x(lv_label_3, -10);
    lv_obj_set_y(lv_label_3, -50);
    lv_obj_set_style_text_font(lv_label_3, font_medium, 0);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_0;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/

