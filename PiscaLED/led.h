#define ligaLed PORTB |= (1 << PINB0)
#define desligaLed PORTB &= ~(1 << PINB0)
#define ligaPorMaisTempo PORTB |= (1 << PINB0); _delay_ms(1000)