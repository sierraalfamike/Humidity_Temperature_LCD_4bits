/*
 * DHT11.h
 *
 *  Created on: Jan 20, 2018
 *      Author: sxmchxn
 */


#ifndef INC_DHT11_H_
#define INC_DHT11_H_

#include <stdint.h>

#define DHT11_PIN P0_B2

extern int16_t temperature;
extern int16_t humidity;



typedef struct dht11_data {
	uint8_t humidity_integer;
	uint8_t humidity_decimal;
	uint8_t temperature_integer;
	uint8_t temperature_fractional;
	uint8_t checksum;
} dht11_data_t;

extern uint8_t* dht11_result_ptr;

extern void dht11_initialize(void);
extern void dht11_read_data(void);

#endif /* INC_DHT11_H_ */
