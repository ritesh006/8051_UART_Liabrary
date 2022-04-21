/* UART_driver.c */

#include <reg51.h>
#include "header.h"

void uart_init(unsigned int baudrate)
{
	/* UART initilization */
	SCON = 0X50;
	TMOD |= 0X20;
	TH1 = 253;     /* for baudrate of 9600 */
	TR1 = 1;       /* start baudrate settting */
	
	switch(baudrate)
	{
		case 7200 : TH1 = 252;
								break;
		
		case 9600 : TH1 = 253;
								break;
		
		case 14400: TH1 = 254;
								break;
		
		case 28800: TH1 = 255;
								break;
		
		case 57600: TH1 = 252;
								PCON = (1 << 8 );
							  break;
		
	}
	
}


void uart_tx (unsigned char send_data)
{
	SBUF = send_data;
	
	while (TI == 0);    /* waiting for data transfer */
	TI = 0 ; 						/* set TI bit to 0 */
	
}