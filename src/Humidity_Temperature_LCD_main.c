
//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------
#include <SI_EFM8BB1_Register_Enums.h>                  // SFR declarations
#include "InitDevice.h"
#include <stdio.h>
// $[Generated Includes]
// [Generated Includes]$

	/*
	 * Breadboard wiring notes:
	 *
	 * LCD:
	 * RS wired to P0.6
	 * RW wired to ground
	 * E wired to P0.7
	 * D0-7 wired to P1.0-3
	 *
	 * DHT11 IO wired to P0.2
	 *
	 * BME280 board is in I2C mode
	 * device address is 1110110 because SDO is connected to GND
	 * SDA is wired to P0.0
	 * SCL is wired to P0.1
	 *
	 */

#include "DHT11.h"
#include "LCD16X2.h"
#include "utils.h"

#define BME280_SCL P0_B0
#define BME280_SDA P0_B1


//-----------------------------------------------------------------------------
// main() Routine
// ----------------------------------------------------------------------------
int main (void)
{

	// Call hardware initialization routine
	enter_DefaultMode_from_RESET();

	// set the LCD to sane settings
	lcd_initialize();

	// print some useless initial text
	print_to_lcd();

	// dht11 needs one second to be ready for the start signal
	// luckily, all the initial LCD stuff takes a bit over one second

	// otherwise, uncomment the next line for a two second delay
	// delay_seconds(2);

	dht11_initialize();
	// get some initial data asap
	dht11_read_data();
	// show initial data on the LCD
	print_to_lcd();

	while (1) 
   {
		// update LCD with new data every 10 seconds, forever
		delay_seconds(10);
		dht11_initialize();
		dht11_read_data();
		print_to_lcd();
     // $[Generated Run-time code]
     // [Generated Run-time code]$
   }                             
}


