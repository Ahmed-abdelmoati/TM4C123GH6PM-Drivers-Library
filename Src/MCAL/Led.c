/*
*FILE DESCRIPTION
*FILE:LED_PROGRAM
*MODULE:LED
*/
/*INCLUDES*/
#include "../../Common/Std_Types.h"
#include "../../Common/Utilities.h"
#include "../../Common/Common.h"
#include "/Inc/Dio_Types.h"
#include "/Inc/Dio.h"
#include "/Inc/Led.h"
void vLed_On(Port_PortType PortType,Port_PinType PinType ){
vDio_writeChannel(PortType,PinType, Dio_HIGH );

}
void vLed_Off(Port_PortType PortType,Port_PinType PinType ){
vDio_writeChannel(PortType,PinType, Dio_LOW);	
}
void vLed_Tog(Port_PortType PortType,Port_PinType PinType ){
vDio_FlipChannel(PortType, PinType );	
}
