#ifndef INC_H
#define INC_H
#define motors_dir_ddr_reg DDRC
#define motors_dir_port_reg PORTC
#define motors_RB_pin PC3
#define motors_RF_pin PC2
#define motors_LF_pin PC1
#define motors_LB_pin PC0
#define motors_pwm_ddr_reg DDRD
#define motors_pwm_port_reg PORTD
#define motors_pwm_R_pin PD6
#define motors_pwm_L_pin PD5
#define OCR0A_reg OCR0A
#define OCR0B_reg OCR0B
#define TCCR0A_reg TCCR0A
#define TCCR0B_reg TCCR0B
#define TCNT0_reg TCNT0
#define COMA1_bit COM0A1
#define COMA0_bit COM0A0
#define COMB1_bit COM0B1
#define COMB0_bit COM0B0
#define WGM0_bit WGM00
#define WGM1_bit WGM01
#define WGM2_bit WGM02
#define CS0_bit CS00
#define CS1_bit CS01
#define CS2_bit CS02

void motors_pin_config();
void pwm_pin_config();
void motors_move_forward();
void timer_pwm_init();
void set_duty_cycle(unsigned char motor1_speed, unsigned char motor2_speed);
#endif