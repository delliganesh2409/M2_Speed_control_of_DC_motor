#define F_CPU 20000000L
#include <xc.h>
#include <util/delay.h>
#include "def.h"
#include "fun.c"


int main()
{
	unsigned char speed_of_motor =125;
	pwm_pin_configuration();
	timer_pwm_init();
	motors_pin_configuration();
	set_speed_of_motor(speed_of_motor, speed_of_motor);
	while (1)
	{
		motors_move_forward();
	}
	return 0;
}