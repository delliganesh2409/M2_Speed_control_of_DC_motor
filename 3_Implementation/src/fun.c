#include "def.h"

void motors_pin_configuration(void){
	motors_dir_ddr_reg |=((1<<motors_RF_pin)|(1<<motors_RB_pin)|(1<<motors_LB_pin)|(1<<motors_LF_pin));
	motors_dir_port_reg &= ~((1<<motors_RF_pin)|(1<<motors_RB_pin)|(1<<motors_LB_pin)|(1<<motors_LF_pin));
}
void pwm_pin_configuration(void){
	motors_pwm_ddr_reg |= ((1<<motors_pwm_R_pin)|(1<<motors_pwm_L_pin));
	motors_pwm_port_reg |= ((1<<motors_pwm_R_pin)|(1<<motors_pwm_L_pin));
}
void motors_move_forward(void){
	motors_dir_port_reg |= ((1<<motors_RF_pin)|(1<<motors_LF_pin));
	motors_dir_port_reg &= ~((1<<motors_RB_pin)|(1<<motors_LB_pin));
}
void timer_pwm_init(void){
	TCCR0A_reg |= ((1<<COMA1_bit)|(1<<COMB1_bit)|(1<<WGM0_bit)|(1<<WGM1_bit));
	TCCR0A_reg &= ~((1<<COMA0_bit)|(1<<COMB0_bit));
	TCCR0B_reg |= (1<<CS1_bit);
	TCCR0B_reg &= ~((1<<WGM2_bit)|(1<<CS2_bit)|(1<<CS0_bit));
	TCNT0_reg =0x00;
	OCR0A_reg =0X00;
	OCR0B_reg =0x00;
}
void set_speed_of_motor(unsigned char speed_of_motor1, unsigned char speed_of_motor2){
	OCR0A_reg = speed_of_motor1;
	OCR0B_reg = speed_of_motor2;
}