/*
 * utils.c
 *
 *  Created on: Jan 21, 2018
 *      Author: sxmchxn
 */
#include <SI_EFM8BB1_Register_Enums.h>                  // SFR declarations


void delay_us (uint16_t i)
{
	// microsecond increments based on 12 MHz sysclk and timer0
	// timer0 prescaled to sysclock/12
	// timer0 is in 16 bit mode
	TH0 = 0;
	TL0 = 0;
	while( ((TH0 << 8) | TL0) < i );
}

void delay_ms (uint16_t i)
{
	// for every one millisecond, call delay_us() 1000 times
	while ( i > 0 )
	{
		delay_us(1000);
		i--;
	}
}

void delay_seconds (uint16_t i)
{
	// for every one second, call delay_ms() 1000 times
	while ( i > 0 )
	{
		delay_ms(1000);
		i--;
	}
}
