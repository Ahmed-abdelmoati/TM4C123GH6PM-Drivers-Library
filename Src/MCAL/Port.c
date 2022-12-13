/*
*FILE DESCRIPTION 
*FILE:PORT_PROGRAM
*MODULE:PORT
*/
/*INCLUDES*/
#include "../../Common/Std_Types.h"
#include "../../Common/Utilities.h"
#include "../../Common/Common.h"
#include "../Config/Port_Cfg.h"
#include "../Config/Port_Lcfg.h"
#include "/Inc/Port_Types.h"
#include "/Inc/Port.h"
/*LOCAL FUNCTIONS PROTOTYPES */ 
/*GLOBAL STATIC VARS*/
/*GLOBAL EXTERN VARS*/
void vPort_Init(const Port_ConfigType *PConfig){
	SET_BIT(SYSCTL_RCGCGPIO_R,0x05 );
	GPIOLOCKF=0x4C4F434B;
	/*Task:Complete other ports*/
u8 u8Index=0;
for(u8Index=0;u8Index<PORT_SIZE;u8Index++){
	switch(PConfig->xPortType){
		case Port_F:{
			switch(PConfig->xPinType){
				case Port_PINX0:{	
							SET_BIT(GPIOCRF,Port_PINX0);
					if(PConfig->xPinDirectionType==Port_IUPUT)
							CLR_BIT(GPIODIRF,Port_PINX0);
					else if(PConfig->xPinDirectionType==Port_OUTPUT)
							SET_BIT(GPIODIRF,Port_PINX0);
					else{
					}
					if(PConfig->xPinModeType==Port_DIO)
							SET_BIT(GPIODENF,Port_PINX0);
					else{} /*TASK:Complete other Modes*/
					if(PConfig->xPinOutputCurrentType==Port_2MA)
							SET_BIT(GPIODR2RF,Port_PINX0);
					else if(PConfig->xPinOutputCurrentType==Port_4MA)
							SET_BIT(GPIODR4RF,Port_PINX0);
					else if(PConfig->xPinOutputCurrentType==Port_8MA)
							SET_BIT(GPIODR8RF,Port_PINX0);
					else{
					}
					if(PConfig->xPinInternalAttachType==Port_PULLUP)
							SET_BIT(GPIOPURF,Port_PINX0);
					else if(PConfig->xPinInternalAttachType==Port_PULLDOWN)
							SET_BIT(GPIOPDRF,Port_PINX0);
					else if(PConfig->xPinInternalAttachType==Port_OPENDRAIN)	
							SET_BIT(GPIOODRF,Port_PINX0);
					else{
					}
				break;
				}
				case Port_PINX1:{
					if(PConfig->xPinDirectionType==Port_IUPUT)
							CLR_BIT(GPIODIRF,Port_PINX1);
					else if(PConfig->xPinDirectionType==Port_OUTPUT)
							SET_BIT(GPIODIRF,Port_PINX1);
					else{
					}
					if(PConfig->xPinModeType==Port_DIO)
							SET_BIT(GPIODENF,Port_PINX1);
					else{} 
					if(PConfig->xPinOutputCurrentType==Port_2MA)
							SET_BIT(GPIODR2RF,Port_PINX1);
					else if(PConfig->xPinOutputCurrentType==Port_4MA)
							SET_BIT(GPIODR4RF,Port_PINX1);
					else if(PConfig->xPinOutputCurrentType==Port_8MA)
							SET_BIT(GPIODR8RF,Port_PINX1);
					else{
					}
					if(PConfig->xPinInternalAttachType==Port_PULLUP)
							SET_BIT(GPIOPURF,Port_PINX1);
					else if(PConfig->xPinInternalAttachType==Port_PULLDOWN)
							SET_BIT(GPIOPDRF,Port_PINX1);
					else if(PConfig->xPinInternalAttachType==Port_OPENDRAIN)	
							SET_BIT(GPIOODRF,Port_PINX1);
					else{
					}
				break;
				}
				case Port_PINX2:{
					if(PConfig->xPinDirectionType==Port_IUPUT)
							CLR_BIT(GPIODIRF,Port_PINX2);
					else if(PConfig->xPinDirectionType==Port_OUTPUT)
							SET_BIT(GPIODIRF,Port_PINX2);
					else{
					}
					if(PConfig->xPinModeType==Port_DIO)
							SET_BIT(GPIODENF,Port_PINX2);
					else{} 
					if(PConfig->xPinOutputCurrentType==Port_2MA)
							SET_BIT(GPIODR2RF,Port_PINX2);
					else if(PConfig->xPinOutputCurrentType==Port_4MA)
							SET_BIT(GPIODR4RF,Port_PINX2);
					else if(PConfig->xPinOutputCurrentType==Port_8MA)
							SET_BIT(GPIODR8RF,Port_PINX2);
					else{
					}
					if(PConfig->xPinInternalAttachType==Port_PULLUP)
							SET_BIT(GPIOPURF,Port_PINX2);
					else if(PConfig->xPinInternalAttachType==Port_PULLDOWN)
							SET_BIT(GPIOPDRF,Port_PINX2);
					else if(PConfig->xPinInternalAttachType==Port_OPENDRAIN)	
							SET_BIT(GPIOODRF,Port_PINX2);
					else{
					}
				break;
				}
				case Port_PINX3:{
					if(PConfig->xPinDirectionType==Port_IUPUT)
							CLR_BIT(GPIODIRF,Port_PINX3);
					else if(PConfig->xPinDirectionType==Port_OUTPUT)
							SET_BIT(GPIODIRF,Port_PINX3);
					else{
					}
					if(PConfig->xPinModeType==Port_DIO)
							SET_BIT(GPIODENF,Port_PINX3);
					else{} 
					if(PConfig->xPinOutputCurrentType==Port_2MA)
							SET_BIT(GPIODR2RF,Port_PINX3);
					else if(PConfig->xPinOutputCurrentType==Port_4MA)
							SET_BIT(GPIODR4RF,Port_PINX3);
					else if(PConfig->xPinOutputCurrentType==Port_8MA)
							SET_BIT(GPIODR8RF,Port_PINX3);
					else{
					}
					if(PConfig->xPinInternalAttachType==Port_PULLUP)
							SET_BIT(GPIOPURF,Port_PINX3);
					else if(PConfig->xPinInternalAttachType==Port_PULLDOWN)
							SET_BIT(GPIOPDRF,Port_PINX3);
					else if(PConfig->xPinInternalAttachType==Port_OPENDRAIN)	
							SET_BIT(GPIOODRF,Port_PINX3);
					else{
					}
				break;
				}
				case Port_PINX4:{
					if(PConfig->xPinDirectionType==Port_IUPUT)
							CLR_BIT(GPIODIRF,Port_PINX4);
					else if(PConfig->xPinDirectionType==Port_OUTPUT)
							SET_BIT(GPIODIRF,Port_PINX4);
					else{
					}
					if(PConfig->xPinModeType==Port_DIO)
							SET_BIT(GPIODENF,Port_PINX4);
					else{} 
					if(PConfig->xPinOutputCurrentType==Port_2MA)
							SET_BIT(GPIODR2RF,Port_PINX4);
					else if(PConfig->xPinOutputCurrentType==Port_4MA)
							SET_BIT(GPIODR4RF,Port_PINX4);
					else if(PConfig->xPinOutputCurrentType==Port_8MA)
							SET_BIT(GPIODR8RF,Port_PINX4);
					else{
					}
					if(PConfig->xPinInternalAttachType==Port_PULLUP)
							SET_BIT(GPIOPURF,Port_PINX4);
					else if(PConfig->xPinInternalAttachType==Port_PULLDOWN)
							SET_BIT(GPIOPDRF,Port_PINX4);
					else if(PConfig->xPinInternalAttachType==Port_OPENDRAIN)	
							SET_BIT(GPIOODRF,Port_PINX4);
					else{
					}
				break;
				}
				case Port_PINX5:{
					if(PConfig->xPinDirectionType==Port_IUPUT)
							CLR_BIT(GPIODIRF,Port_PINX5);
					else if(PConfig->xPinDirectionType==Port_OUTPUT)
							SET_BIT(GPIODIRF,Port_PINX5);
					else{
					}
					if(PConfig->xPinModeType==Port_DIO)
							SET_BIT(GPIODENF,Port_PINX5);
					else{} 
					if(PConfig->xPinOutputCurrentType==Port_2MA)
							SET_BIT(GPIODR2RF,Port_PINX5);
					else if(PConfig->xPinOutputCurrentType==Port_4MA)
							SET_BIT(GPIODR4RF,Port_PINX5);
					else if(PConfig->xPinOutputCurrentType==Port_8MA)
							SET_BIT(GPIODR8RF,Port_PINX5);
					else{
					}
					if(PConfig->xPinInternalAttachType==Port_PULLUP)
							SET_BIT(GPIOPURF,Port_PINX5);
					else if(PConfig->xPinInternalAttachType==Port_PULLDOWN)
							SET_BIT(GPIOPDRF,Port_PINX5);
					else if(PConfig->xPinInternalAttachType==Port_OPENDRAIN)	
							SET_BIT(GPIOODRF,Port_PINX5);
					else{
					}
				break;
				}
				case Port_PINX6:{
				break;/*It contains only 6Pins */
				}
				case Port_PINX7:{
				break;/*It contains only 6Pins */
				}
				case Port_PinTypeSize:{
				break;
				}				
			}
		break;
		}
		default:{
			
		}
	}PConfig++;
}
}

