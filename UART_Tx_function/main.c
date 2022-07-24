/* Main UART.C */

#include <reg51.h>
#include <string.h>
#include "header.h"

void main()
{
	unsigned int i, receive_data;
	unsigned char array[20], *p ;  /* delcare array for string receive function */
	
	uart_init(9600);  /* uart initialization */
	lcd_init();

	while (1)
	{
		/* Transmitting data from microcontroller to serial terminal */
		
		for( i = 0; i < 26; i++ )
		{
			uart_tx('A' + i);
			
			
			delay_ms(500);
		} /* for loop ends here*/    
		
		
	}/* While loop ends here */
} /* main ends here */