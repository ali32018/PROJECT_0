#include"../../lib/std.types.h"
#include"../../lib/BIT_MATH.h"
#include"../../MCAL/01-DIO/DIO_interface.h"
#include "LCD_interface.h"
#include"LCD_config.h"
#include<util/delay.h>


void LCD_vdSendData(u8 Copy_u8Data){
	/*------------------set RS as High-----------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RS_PIN,HIGH);

	/*------------------set RW as low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RW_PIN,LOW);

	/*------------------Send data------------------*/
	DIO_u8SetPortValue(LCD_DATAPORT,Copy_u8Data);

	/*------------------Set Enable as high------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,HIGH);

	/*------------------Delay 2 ms------------------*/
	_delay_ms(2);

	/*------------------Set Enable as Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,LOW);

}

/*command*/
void LCD_vdSendCommand(u8 Copy_u8Command){
	
	/*------------------Set RS as Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RS_PIN,LOW);

	/*------------------Set RW ad Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_RW_PIN,LOW);

	/*------------------Send command------------------*/
	DIO_u8SetPortValue(LCD_DATAPORT,Copy_u8Command);

	/*------------------Set Enable as High------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,HIGH);

	/*------------------delay 2ms------------------*/
	_delay_ms(2);

	/*------------------Set Enable as Low------------------*/
	DIO_u8SetPinValue(LCD_CONTROLPORT,LCD_E_PIN,LOW);

}

void LCD_vdInit(void){
	_delay_ms(40);
	LCD_vdSendCommand(0b00111100);
	_delay_ms(1);
	LCD_vdSendCommand(0b0001100);
	_delay_ms(1);
	LCD_vdSendCommand(0b00000001);
}
