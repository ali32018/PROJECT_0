/*
 * MAIN.c
 *
 *  Created on: Dec 29, 2021
 *      Author: ali
 */
#include"lib/BIT_MATH.h"
#include"lib/std.types.h"
#include"MCAL/01-DIO/DIO_interface.h"
#include"HAL/LCD/LCD_interface.h"
#include<util/delay.h>

int main(){
	DIO_VidSetPortDirection(PORT_A, OUTPUT);
	DIO_VidSetPortDirection(PORT_B,OUTPUT);
	LCD_vdInit();

	LCD_vdSendData('A');
	LCD_vdSendData('L');
	LCD_vdSendData('I');


	while(1)

	{
	}


}
