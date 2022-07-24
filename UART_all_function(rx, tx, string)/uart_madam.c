#include<reg51.h>
void UART_Init(void)
{
	SCON=0x50;//select serial M1 with REN
	TMOD=0x20;//T1 in M2
    TH1=253;//9600 baud rate@Fosc=11.0592MHz
	TR1=1;	
}
char Rx_char_UART(void)
{
	while(RI==0);//waiting for reception
	RI=0;
	return(SBUF);
}
void Tx_char_UART(char ch)
{
	SBUF=ch;
	while(TI==0);//waiting for txion to complete
	TI=0;
}
