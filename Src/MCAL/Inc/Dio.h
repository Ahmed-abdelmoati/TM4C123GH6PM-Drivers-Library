/*
*FILE DESCRIPTION
*FILE:DIO_H_ 
*MODULE: DIO
*/
#include "../../Common/Std_Types.h"
#include "../../Common/Utilities.h"
#include "../../Common/Common.h"
#include "/Port_types.h"
#include "/Dio_types.h"
#ifndef DIO_H_ 
#define DIO_H_ 
Dio_LevelType xDio_ReadChannel(Port_PortType PortType,Port_PinType PinType);
void vDio_writeChannel(Port_PortType PortType,Port_PinType PinType,Dio_LevelType  LevelType );
u8 u8Dio_ReadPort(Port_PortType PortType);
void vDio_WritePort(Port_PortType,u8 Portvalue);
void vDio_FlipChannel(Port_PortType PortType,Port_PinType PinType );
#endif /* DIO_H_ */
