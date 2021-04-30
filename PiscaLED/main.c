#define F_CPU 11059200UL
#include <avr/io.h>
#include <util/delay.h>
#include "led.h"


int main(void)
{
	DDRB = 0xff;
	for(;;)
	{
		_delay_ms(250);
		ligaPorMaisTempo;
		_delay_ms(250);
		desligaLed;
	}
}
