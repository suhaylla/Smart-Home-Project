/*
 * main.c
 *
 *  Created on: Feb 5, 2024
 *      Author: Mahmoud Abdelraouf
 */

/**< LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
/**< MCAL */
#include "DIO_interface.h"
#include <util/delay.h>

/**< APP */
int main(void) {
	/**< voidInit */
	DIO_SetPinDirection(DIO_PORTC, DIO_PIN1, DIO_OUTPUT);


	/**< super loop */
	while(1) {
		DIO_SetPinValue(DIO_PORTC, DIO_PIN1, DIO_HIGH);

		_delay_ms(500);

		DIO_SetPinValue(DIO_PORTC, DIO_PIN1, DIO_LOW);

		_delay_ms(500);

	}


}

