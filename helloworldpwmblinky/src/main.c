#include <zephyr/device.h>
#include <zephyr/drivers/pwm.h>
#include <zephyr/kernel.h>


static const struct pwm_dt_spec pwmled = 
    PWM_DT_SPEC_GET(DT_NODELABEL(pwm_led0));

int main(void)
{
    while(true) {
        pwm_set_pulse_dt(&pwmled, 0);
        k_msleep(1000);
        pwm_set_pulse_dt(&pwmled, 10000);
        k_msleep(1000);
    }
    return 0;  
}