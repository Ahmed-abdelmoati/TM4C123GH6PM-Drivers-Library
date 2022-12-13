/*
*FILE DESCRIPTION
*FILE:PORT_TYPES_H_ 
*MODULE:PORT
*/
#ifndef  PORT_TYPES_H_
#define  PORT_TYPES_H_ 
typedef enum{
	Port_PINX0,
	Port_PINX1,
	Port_PINX2,
	Port_PINX3,
	Port_PINX4,
	Port_PINX5,
	Port_PINX6,
	Port_PINX7,
	Port_PinTypeSize
}Port_PinType;
typedef enum{
	Port_A,
	Port_B,
	Port_C,
	Port_D,
	Port_E,
	Port_F,
	Port_PortTypeSize
}Port_PortType;
typedef enum{
	Port_IUPUT,
	Port_OUTPUT,	
	Port_PinDirectionTypeSize
}Port_PinDirectionType;
typedef enum{
	Port_DIO,
	Port_EXTINT,
    Port_Analog,
    Port_UART,	
	Port_CAN,	
	Port_I2C,		
	/*Task: compelete other modes*/
	Port_PinModeTypeSize
}Port_PinModeType;
typedef enum{
	Port_PULLUP,
	Port_PULLDOWN,
	Port_OPENDRAIN,
	Port_PinInternalAttachTypeSize
}Port_PinInternalAttachType;
typedef enum{
	Port_2MA,
	Port_4MA,
	Port_8MA,
	Port_PinOutputCurrentTypeSize
}Port_PinOutputCurrentType;
typedef struct {
Port_PinType	xPinType;
Port_PortType	xPortType;
Port_PinDirectionType	xPinDirectionType;
Port_PinModeType	xPinModeType;
Port_PinInternalAttachType	xPinInternalAttachType;
Port_PinOutputCurrentType	xPinOutputCurrentType;
}Port_ConfigType;
#endif /* PORT_TYPES_H_ */
