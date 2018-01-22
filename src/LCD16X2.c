/*
 * LCD16X2.c
 *
 *  Created on: Jan 21, 2018
 *      Author: sxmchxn
 */

#include <SI_EFM8BB1_Register_Enums.h>
#include <stdio.h>
#include "DHT11.h"
#include "utils.h"
#include "LCD16X2.h"

uint8_t lcd_data_8bits = 0;

uint8_t line0[17] = {0};
char line1[17] = {0};


void lcd_e_pulse ()
{
	// the 12 MHz sysclk period is 81 nanoseconds
	// SETB P1.1 takes two cycles
	// each NOP takes one cycle
	// CLR P1.1 takes two cycles
	// the LCD_E latch stays high for ~500 nanoseconds

	LCD_DATA_4BITS = lcd_data_8bits >> 4;
	LCD_E = 1;
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	LCD_E = 0;

	LCD_DATA_4BITS = lcd_data_8bits;
	LCD_E = 1;
	_nop_();
	_nop_();
	_nop_();
	_nop_();
	LCD_E = 0;
	delay_us(50);
}

void lcd_initialize()
{
	// wait for HD44780 LCD to be ready
	delay_us(50000);

	// select the instruction register to send commands
	// pull down the enable pin
	LCD_RS = 0;
	LCD_E = 0;

	// set function for 4 bit, two line mode
	lcd_data_8bits = 0x28;
	lcd_e_pulse();

	// set function for left-to-right entry mode, disable screen shifting
	lcd_data_8bits = 0x06;
	lcd_e_pulse();

	// turn on display with blinking cursor
	lcd_data_8bits = 0x0f;
	lcd_e_pulse();

	// clear display and return cursor to home, this needs some extra delay
	lcd_data_8bits = 0x01;
	lcd_e_pulse();
	delay_us(2000);
}

void print_to_lcd()
{
	char* current_character;
	sprintf(line0, "DHT11: %d\xDF\C %d%%", temperature, humidity);
	sprintf(line1, "BME280 %d\xDF\C %d%%", temperature, humidity);

	// clear display
	LCD_RS = 0;
	lcd_data_8bits = 0x01;
	lcd_e_pulse();
	delay_us(2000);

	// change to data register
	LCD_RS = 1;

	// pause for effect
	delay_ms(500);
	// write out line0
	current_character = line0;
	do {
		lcd_data_8bits = *current_character;
		lcd_e_pulse();
	} while(*((current_character++)+1) != 0);

	// move cursor to second line
	LCD_RS = 0;
	lcd_data_8bits = 0xc0;
	lcd_e_pulse();

	// change to data register
	LCD_RS = 1;

	// pause for effect
	delay_ms(500);
	// write out line1
	current_character = line1;
	do {
		lcd_data_8bits = *current_character;
		lcd_e_pulse();
	} while(*((current_character++)+1) != 0);
}

