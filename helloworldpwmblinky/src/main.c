#include <zephyr/device.h>
#include <zephyr/drivers/pwm.h>

static const struct pwm_dt_spec pwmled = 
    PWM_DT_SPEC_GET(DT_NODELABEL(pwm_led0));

int main(void)
{
    
    return 0;  
}