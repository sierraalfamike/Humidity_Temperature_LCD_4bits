/*
 * DHT11.c
 *
 *  Created on: Jan 20, 2018
 *      Author: sxmchxn
 */

#include <SI_EFM8BB1_Register_Enums.h>
#include "DHT11.h"
#include "utils.h"


dht11_data_t dht11_result;
uint8_t*  dht11_result_ptr;

int16_t temperature = 0;
int16_t humidity = 0;

void dht11_initialize()
{
	DHT11_PIN = 0;
	delay_us(20000);
	DHT11_PIN = 1;
}

void dht11_read_data()
{
	// wait til DHT11 responds with ready signal
//	dht11_io_expected_status = 0;
//	dht11_io_expected_status_expected_duration_us = 80;
//	dht11_io_status_current_duration = 0;
//	while ( DHT11_PIN == dht11_io_expected_status && dht11_io_status_current_duration < dht11_io_expected_status_expected_duration_us)
//	{
//		dht11_io_status_current_duration++;
//	}
//	dht11_io_expected_status = 1;
//	dht11_io_expected_status_expected_duration_us = 80;
//	dht11_io_status_current_duration = 0;
//	while ( DHT11_PIN == dht11_io_expected_status && dht11_io_status_current_duration < dht11_io_expected_status_expected_duration_us)
//	{
//		dht11_io_status_current_duration++;
//	}
	delay_us(200);
	// read all the high pulses and assign value by duration

	dht11_result_ptr = (uint8_t*)&dht11_result;

	{
		uint8_t i = 0;
	for ( i = 0; i < 5; i++ )
	{
		uint8_t dht11_stream = 0;
		int8_t dht11_response_bit = 0;
		for ( dht11_response_bit = 7; dht11_response_bit >= 0; dht11_response_bit-- )
		{
			// wait for the dht11_io pin to go high
			while ( !DHT11_PIN );
			// count time to see if the pin is high for a short or long period of time
			delay_us(50);
			if ( DHT11_PIN )
			{
				dht11_stream |=  ( 1 << dht11_response_bit );
				delay_us(40);
			}
		}
		dht11_result_ptr[i] = dht11_stream;
	}
	}
	humidity = dht11_result.humidity_integer;
	temperature = dht11_result.temperature_integer;
}
