#define F_CPU 20000000L
#include <xc.h>
#include <util/delay.h>
#include "inc.h"
#include "void_function.c"

int main()
{
	unsigned char duty_cycle =125;
	pwm_pin_config();
	timer_pwm_init();
	motors_pin_config();
	set_duty_cycle(duty_cycle, duty_cycle+155);
	while (1)
	{
		motors_move_forward();
	}
	return 0;
}

