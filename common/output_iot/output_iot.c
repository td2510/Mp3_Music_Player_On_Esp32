#include <stdio.h>
#include "driver/gpio.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
#include "output_iot.h"


void output_io_create(gpio_num_t gpio_num) {
     gpio_config_t io_conf = {
		   .pin_bit_mask = (1 << gpio_num),
		   .mode = GPIO_MODE_DEF_OUTPUT,
		   .pull_up_en = GPIO_PULLUP_DISABLE,
		   .pull_down_en = GPIO_PULLDOWN_ENABLE,
		   .intr_type = GPIO_INTR_DISABLE
   };

    gpio_config(&io_conf);
    
}

void output_io_set_level(gpio_num_t gpio_num, int level) {
   
    gpio_set_level(gpio_num, level);
}

void output_io_toggle(gpio_num_t gpio_num) {
    int old_level = gpio_get_level(gpio_num);
    gpio_set_level(gpio_num, 1-old_level);
}