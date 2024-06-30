#include <zephyr/device.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>

static const struct gpio_dt_spec led = 
    GPIO_DT_SPEC_GET(DT_NODELABEL(blinking_led), gpios);

int main(void) {
   int returnvalue;

    if(!device_is_ready(led.port)) {
        printf("device not ready");
        return;
    }

    returnvalue = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
    if (returnvalue != 0)
    {
        printf("gpio configure failed");
        return;
    }

    while(true) {
        gpio_pin_toggle_dt(&led);
        printf("Hello world!!\n");

        k_msleep(1000);

    }
}
