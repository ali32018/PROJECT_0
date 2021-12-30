#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#define INPUT 0
#define OUTPUT 1
#define PORT_INPUT 0x00
#define PORT_OUTPUT 0xff
#define HIGH   1
#define LOW    0
#define PORT_HIGH   0xff
#define PORT_LOW    0x00
#define PORT_A    0
#define PORT_B    1
#define PORT_C    2
#define PORT_D    3
#define PIN_0     0
#define PIN_1     1
#define PIN_2     2
#define PIN_3     3
#define PIN_4     4
#define PIN_5     5
#define PIN_6     6
#define PIN_7     7






/*set direction of pin at any port */

void DIO_VidSetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin , u8 Copy_u8Direction );



/*set any pin value at any port as High or LOW */



void DIO_VidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin , u8 Copy_u8Value );


/*read any pin at port*/


u8 DIO_U8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin  );


/*Port scope */

/*set direction of any port */

void DIO_VidSetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction );



/*set  any port value*/


void DIO_VidSetPortValue(u8 Copy_u8Port , u8 Copy_u8Value );



/*read any port*/



u8 DIO_U8GetPortValue (u8 Copy_u8Port );









#endif
