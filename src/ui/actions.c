#include "actions.h"
#include "vars.h"
#include "screens.h"

extern char* native_string;

void action_get_string(lv_event_t *e) {
    // TODO: Implement action get_string here
    set_var_test_string(native_string);

}

void action_populate_list(lv_event_t *e) {
    // TODO: Implement action populate_list here

    lv_obj_t *obj = lv_label_create(objects.string_list);
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_label_set_text(obj, "Text");
    lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    obj = lv_label_create(objects.string_list);
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
    lv_label_set_text(obj, "Text 2");
    lv_obj_set_style_text_font(obj, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

}
