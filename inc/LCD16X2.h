/*
 * LCD16X2.h
 *
 *  Created on: Jan 21, 2018
 *      Author: sxmchxn
 */

#ifndef LCD16X2_H_
#define LCD16X2_H_

#include <stdint.h>

#define LCD_RS P0_B6
#define LCD_E P0_B7
#define LCD_DATA_4BITS P1

extern uint8_t lcd_data_8bits;
extern uint8_t line0[17];
extern char line1[17];


extern void lcd_e_pulse(void);
extern void lcd_initialize(void);
extern void print_to_lcd(void);

#endif /* LCD16X2_H_ */
