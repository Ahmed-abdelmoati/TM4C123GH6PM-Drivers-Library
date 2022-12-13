/*
*FILE DESCRIPTION
*FILE:PORT_Lcfg_C_ 
*MODULE:PORT 
*/
#include "../MCAL/Inc/Port_Types.h"
#include "Port_Lcfg.h"
extern Port_ConfigType PORT[];
Port_ConfigType PORT[PORT_SIZE]=
{/*Port_PinType			Port_PortType			Port_PinDirectionType			Port_PinModeType			Port_PinInternalAttachType			Port_PinOutputCurrentType*/
{	Port_PINX0				,Port_F						,Port_IUPUT							  ,Port_DIO							,Port_PULLUP											,Port_8MA				},	
{	Port_PINX4				,Port_F						,Port_IUPUT							  ,Port_DIO							,Port_PULLUP									  	,Port_8MA				},	
{	Port_PINX2				,Port_F						,Port_OUTPUT							,Port_DIO							,Port_PULLDOWN									  ,Port_8MA				},	
};

