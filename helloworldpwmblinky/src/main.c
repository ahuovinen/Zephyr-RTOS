#include <zephyr/device.h>
#include <zephyr/drivers/pwm.h>
#include <zephyr/kernel.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(pwmblinkyled);

static const struct pwm_dt_spec pwmled = 
    PWM_DT_SPEC_GET(DT_NODELABEL(pwm_led0));

int main(void)
{
    LOG_INF("main function started.");

    while(true) {
        pwm_set_pulse_dt(&pwmled, 0);
        LOG_INF("led off.");
        k_msleep(1000);
        pwm_set_pulse_dt(&pwmled, 10000);
        LOG_INF("led on.");
        k_msleep(1000);
    }
    return 0;  
}