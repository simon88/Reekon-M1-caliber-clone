/*
 * user_function.c
 *
 *  Created on: 21 déc. 2020
 *      Author: simon
 */

#include "user_function.h"
#include "i2c-lcd.h"
#include <stdio.h>

#define PRECISION 0.0942F

void display_measure(uint32_t const counter)
{
	float measure = counter * PRECISION;

}


void display_saw_thickness(uint8_t const saw_thickness)
{
	int length = snprintf( NULL, 0, "%d", saw_thickness );
	char str_saw[length+1];
	sprintf(str_saw, "%d", saw_thickness);

	lcd_put_cur(1, 0);
	lcd_send_string(str_saw);
}


void raz_measure(uint32_t const length)
{
	lcd_clear();
	lcd_send_string("Longueur : ");
	lcd_put_cur(1, 10);

	int length_char = snprintf( NULL, 0, "%lu", length );
	char str_length[length_char+1];
	sprintf(str_length, "%lu", length);

	lcd_send_string(str_length);
}
