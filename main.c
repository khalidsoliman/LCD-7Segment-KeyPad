/*
 * main.c
 *
 *  Created on: Jan 3, 2018
 *      Author: Khalid
 */

#include "KeyPad/KeyPad.h"
#include "LCD/LCD.h"
#include <avr/io.h>
#include <util/delay.h>

#define set_bit(reg,pin) reg|=(1<<pin)
#define clear_bit(reg,pin) reg&=~(1<<pin)
#define read_bit(reg,pin) (reg&(1<<pin))

int main()
{
	//BCD

	int i =0;
	for(i=0;i<4;i++)
	{
		set_bit(DDRB,i);
	}

	//7_Segment

	set_bit(DDRC,2);
	set_bit(PORTC,2);

	KeyPad_Init();
	LCD_init();

	while(1)
	{
		LCD_GoTo(1,1);
		LCD_Write_Data(KeyPad()+48);
		PORTB=KeyPad();
		_delay_ms(1000);
		LCD_Write_CMD(0x01);
	}
}
