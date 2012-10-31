/* 
 * !\file test.c
 * \brief File for testing ATmega2560 and STK600 functionality
 * Created: 9/7/2012 00:41:09
 *  Author: christen
 */ 


#include <avr/io.h>
#include <util/delay.h>

void Init(void);             

char run = 1;

int main(void)
{
    while(1)
    {
        Init();
		Lights_run(); 
    }
}

/*! Initializes ports and variables */
void Init(void)
{
	DDRA = 0xFF;
	PORTA = 0x01;
}

/*! Tests LED bank and PORTA */
void Lights_run(void)
{
	while(run)
	{
		PORTA = PORTA << 1;
		_delay_ms(500);
	}
	
}	