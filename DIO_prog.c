#include "../../lib/std.types.h"
#include "../../lib/BIT_MATH.h"
#include "DIO_register.h"
#include "DIO_interface.h"


/*set direction of pin at any port */

void DIO_VidSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin , u8 Copy_u8Direction ){
	
	if (Copy_u8Direction==OUTPUT){
		switch (Copy_u8Port){
		case (PORT_A): SET_BIT(DDRA,Copy_u8Pin); break;
		case (PORT_B): SET_BIT(DDRB,Copy_u8Pin); break;
		case (PORT_C): SET_BIT(DDRC,Copy_u8Pin); break;
		case (PORT_D): SET_BIT(DDRD,Copy_u8Pin); break;
		}
	}
	
	else if (Copy_u8Direction==INPUT){
		switch (Copy_u8Port){
		case (PORT_A): CLR_BIT(DDRA,Copy_u8Pin); break;
		case (PORT_B): CLR_BIT(DDRB,Copy_u8Pin); break;
		case (PORT_C): CLR_BIT(DDRC,Copy_u8Pin); break;
		case (PORT_D): CLR_BIT(DDRD,Copy_u8Pin); break;
		}
	}
	
}



/*set any pin value at any port as High or LOW */



void DIO_VidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin , u8 Copy_u8Value ){
	if (Copy_u8Value==HIGH){
		switch (Copy_u8Port){
		case (PORT_A): SET_BIT(PORTA,Copy_u8Pin ); break;
		case (PORT_B): SET_BIT(PORTB,Copy_u8Pin ); break;
		case (PORT_C): SET_BIT(PORTC,Copy_u8Pin ); break;
		case (PORT_D): SET_BIT(PORTD,Copy_u8Pin ); break;
		}
		}
	if (Copy_u8Value==LOW){
				switch (Copy_u8Port){
				case (PORT_A): CLR_BIT(PORTA,Copy_u8Pin ); break;
				case (PORT_B): CLR_BIT(PORTB,Copy_u8Pin ); break;
				case (PORT_C): CLR_BIT(PORTC,Copy_u8Pin ); break;
				case (PORT_D): CLR_BIT(PORTD,Copy_u8Pin ); break;
				}
	}
	}

u8 DIO_U8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin  ){
	
	u8 U8_pinValue;
	switch (Copy_u8Port){
					case (PORT_A): U8_pinValue=GET_BIT(PORTA,Copy_u8Pin ); break;
					case (PORT_B): U8_pinValue=GET_BIT(PORTB,Copy_u8Pin ); break;
					case (PORT_C): U8_pinValue=GET_BIT(PORTC,Copy_u8Pin ); break;
					case (PORT_D): U8_pinValue=GET_BIT(PORTD,Copy_u8Pin ); break;
	}
	return U8_pinValue;
}

void DIO_VidSetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction ){
	if (Copy_u8Direction==OUTPUT){
			switch (Copy_u8Port){
			case (PORT_A): DDRA=PORT_OUTPUT ; break;
			case (PORT_B): DDRB=PORT_OUTPUT; break;
			case (PORT_C): DDRC=PORT_OUTPUT; break;
			case (PORT_D): DDRD=PORT_OUTPUT; break;
			}
		}

		else if (Copy_u8Direction==INPUT){
			switch (Copy_u8Port){
			case (PORT_A): DDRA=PORT_INPUT ; break;
			case (PORT_B): DDRB=PORT_INPUT ; break;
			case (PORT_C): DDRC=PORT_INPUT ; break;
			case (PORT_D): DDRD=PORT_INPUT ; break;
			}
		}

 }


void DIO_VidSetPortValue(u8 Copy_u8Port , u8 Copy_u8Value ){
	if (Copy_u8Value==HIGH){
			switch (Copy_u8Port){
			case (PORT_A): PORTA=PORT_HIGH ; break;
			case (PORT_B): PORTB=PORT_HIGH ; break;
			case (PORT_C): PORTC=PORT_HIGH ; break;
			case (PORT_D): PORTD=PORT_HIGH ; break;
			}
			}
		if (Copy_u8Value==LOW){
					switch (Copy_u8Port){
					case (PORT_A): PORTA=PORT_LOW ; break;
					case (PORT_B): PORTA=PORT_LOW ; break;
					case (PORT_C): PORTA=PORT_LOW ; break;
					case (PORT_D): PORTA=PORT_LOW ; break;
					}
		}

 }


u8 DIO_U8GetPortValue (u8 Copy_u8Port ){

	u8 U8_portValue;
	switch (Copy_u8Port){
					case (PORT_A): U8_portValue=PORTA ; break;
					case (PORT_B): U8_portValue=PORTB ; break;
					case (PORT_C): U8_portValue=PORTC ; break;
					case (PORT_D): U8_portValue=PORTD ; break;
	}
	return U8_portValue;

 }




