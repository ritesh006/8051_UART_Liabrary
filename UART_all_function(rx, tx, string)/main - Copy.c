/* Main UART.C */

#include <reg51.h>
#include "header.h"

void main()
{
	unsigned char i, receive_data;
	uart_init(9600);
	lcd_init();

	while (1)
	{
		/* Transmitting data from microcontroller to serial terminal  */ 
		/*
		for( i = 0; i < 26; i++ )
		{
			uart_tx('A' + i);
			delay_ms(500);
		}     */
		
		/* receiving data from serial terminal microcontroller 
		
		receive_data = uart_rx();
		uart_tx(receive_data);							/* for loopback to what */
		
		
		lcd_data('A');
		
	}
	
	
}