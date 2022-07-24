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
		}    
		//string_data("hello");
		
		/* receiving data from serial terminal microcontroller */
//  	delay_ms(500); /* delay is mandatory without that lcd funtion not work */
//	  receive_data = uart_rx();
//		uart_tx(receive_data);							/* for loopback to what */
//		
		
/* use proteus 7 version for simulation in UART rx function not 
	 working in proteus 8 */
		
		
	//uart_tx_string("Hello");
	
	
	/* uart receive string */
	
	uart_rx_string(array,19);
	lcd_cmd(0x01);		
	lcd_string(array);
		
		
				
	

			}
}