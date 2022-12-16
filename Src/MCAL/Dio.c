/*
*FILE DESCRIPTION
*FILE:DIO_PROGRAM
*MODULE:DIO
*/
/*INCLUDES*/ 
#include "/Inc/DIO_types.h"
#include "/Inc/DIO.h"
Dio_LevelType xDio_ReadChannel(Port_PortType PortType,Port_PinType PinType){
/*There is a problem in bit masking it only works in case or writing or reading the whole register */
/*
	switch(PortType){	
		case Port_F:{
			switch(PinType){
				case Port_PINX0:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x04))==0x01)
						return Dio_HIGH;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x04))==0x00)
						return Dio_LOW;					
					break;
				}
				case Port_PINX1:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x08))==0x02)
						return Dio_HIGH;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x08))==0x00)
						return Dio_LOW;					
					break;
				}
				case Port_PINX2:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x10))==0x04)
						return Dio_HIGH;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x10))==0x00)
						return Dio_LOW;					
					break;
				}
				case Port_PINX3:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x40))==0x08)
						return Dio_HIGH;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x40))==0x00)
						return Dio_LOW;					
					break;
				}
				case Port_PINX4:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x80))==0x10)
						return Dio_HIGH;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x80))==0x00)
						return Dio_LOW;					
					break;
				}
				case Port_PINX5:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x100))==0x20)
						return Dio_HIGH;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x100))==0x00)
						return Dio_LOW;					
					break;			
		}
			default:{}
		break;
	}		
}	
}
	return Dio_LOW; 
*/
	switch(PortType){	
		case Port_F:{
			switch(PinType){
				case Port_PINX0:{
				if(GPIODATAF_BIT(Port_PINX0)==Dio_HIGH)
						return Dio_HIGH;
				else if(GPIODATAF_BIT(Port_PINX0)==Dio_LOW)
						return Dio_LOW;					
					break;
				}
				case Port_PINX1:{
				if(GPIODATAF_BIT(Port_PINX1)==Dio_HIGH)
						return Dio_HIGH;
				else if(GPIODATAF_BIT(Port_PINX1)==Dio_LOW)
						return Dio_LOW;					
					break;
				}
				case Port_PINX2:{
				if(GPIODATAF_BIT(Port_PINX2)==Dio_HIGH)
						return Dio_HIGH;
				else if(GPIODATAF_BIT(Port_PINX2)==Dio_LOW)
						return Dio_LOW;					
					break;
				}
				case Port_PINX3:{
				if(GPIODATAF_BIT(Port_PINX3)==Dio_HIGH)
						return Dio_HIGH;
				else if(GPIODATAF_BIT(Port_PINX3)==Dio_LOW)
						return Dio_LOW;					
					break;				
					break;
				}
				case Port_PINX4:{
				if(GPIODATAF_BIT(Port_PINX4)==Dio_HIGH)
						return Dio_HIGH;
				else if(GPIODATAF_BIT(Port_PINX4)==Dio_LOW)
						return Dio_LOW;					
					break;
				}
				case Port_PINX5:{
				if(GPIODATAF_BIT(Port_PINX5)==Dio_HIGH)
						return Dio_HIGH;
				else if(GPIODATAF_BIT(Port_PINX5)==Dio_LOW)
						return Dio_LOW;					
					break;			
		}
			default:{}
		break;
	}		
}	
}
	return Dio_LOW; /* avoid warning */
}
void vDio_writeChannel(Port_PortType PortType,Port_PinType PinType,Dio_LevelType  LevelType ){
	/*There is a problem in bit masking it only works in case or writing or reading the whole register */
/*	
	switch(PortType){	
		case Port_F:{
			switch(PinType){
				case Port_PINX0:{
				*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x04))=((u8)LevelType<<0);			
					break;
				}
				case Port_PINX1:{
				*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x08))=((u8)LevelType<<1);							
					break;
				}
				case Port_PINX2:{
				*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x10))=((u8)LevelType<<2);		
					break;					
				}
				case Port_PINX3:{
				*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x40))=((u8)LevelType<<3);				
					break;
				}
				case Port_PINX4:{
				*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x80))=((u8)LevelType<<4);				
					break;
				}
				case Port_PINX5:{
				*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x100))=((u8)LevelType<<5);	
					break;			
		}
			default:{}
		break;
	}		
}	
}
*/
/*Trying to use bit banding feature*/
	switch(PortType){	
		case Port_F:{
			switch(PinType){
				case Port_PINX0:{
				GPIODATAF_BIT(Port_PINX0)=((u8)LevelType);			
					break;
				}
				case Port_PINX1:{
				GPIODATAF_BIT(Port_PINX1)=((u8)LevelType);							
					break;
				}
				case Port_PINX2:{
				GPIODATAF_BIT(Port_PINX2)=((u8)LevelType);		
					break;					
				}
				case Port_PINX3:{
				GPIODATAF_BIT(Port_PINX3)=((u8)LevelType);				
					break;
				}
				case Port_PINX4:{
				GPIODATAF_BIT(Port_PINX4)=((u8)LevelType);				
					break;
				}
				case Port_PINX5:{
				GPIODATAF_BIT(Port_PINX5)=((u8)LevelType);	
					break;			
		}
			default:{}
		break;
	}		
}	
}
}
u8 u8Dio_ReadPort(Port_PortType PortType){
switch(PortType){	
		case Port_F:{
			return (u8)GPIODATAF;	
			break;
		}
		default: {
			
		}
}
	return (u8)GPIODATAF;
}
void vDio_WritePort(Port_PortType PortType,u8 Portvalue){
switch(PortType){	
		case Port_F:{
			 GPIODATAF=Portvalue;	
			break;
		}
}
}

void vDio_FlipChannel(Port_PortType PortType,Port_PinType PinType ){
/*There is a problem in bit masking it only works in case or writing or reading the whole register */
/*
	switch(PortType){	
		case Port_F:{
			switch(PinType){
				case Port_PINX0:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x04))==0x01)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x04))=0x00;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x04))==0x00)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x04))=0x01;			
					break;
				}
				case Port_PINX1:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x08))==0x02)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x08))=0x00;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x08))==0x00)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x08))=0x02;				
					break;
				}
				case Port_PINX2:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x10))==0x04)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x10))=0x00;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x10))==0x00)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x10))=0x04;				
					break;
				}
				case Port_PINX3:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x40))==0x08)
					*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x40))=0x00;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x40))==0x00)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x40))=0x08;					
					break;
				}
				case Port_PINX4:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x0))==0x10)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x80))=0x00;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x80))==0x00)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x80))=0x10;				
					break;
				}
				case Port_PINX5:{
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x100))==0x20)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x100))=0x00;
				else
				if(*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x100))==0x00)
						*((volatile u8*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x100))=0x20;					
					break;			
		}
			default:{}
		break;
	}		
}	
		
}
*/
/*Trying to use bit banding feature*/
	switch(PortType){	
		case Port_F:{
			switch(PinType){
				case Port_PINX0:{
				if(GPIODATAF_BIT(Port_PINX0)==0x01)
						GPIODATAF_BIT(Port_PINX0)=0x00;
				else
				if(GPIODATAF_BIT(Port_PINX0)==0x00)
						GPIODATAF_BIT(Port_PINX0)=0x01;			
					break;
				}
				case Port_PINX1:{
				if(GPIODATAF_BIT(Port_PINX1)==0x01)
						GPIODATAF_BIT(Port_PINX1)=0x00;
				else
				if(GPIODATAF_BIT(Port_PINX1)==0x00)
						GPIODATAF_BIT(Port_PINX1)=0x01;			
					break;
				}
				case Port_PINX2:{
				if(GPIODATAF_BIT(Port_PINX2)==0x01)
						GPIODATAF_BIT(Port_PINX2)=0x00;
				else
				if(GPIODATAF_BIT(Port_PINX2)==0x00)
						GPIODATAF_BIT(Port_PINX2)=0x01;			
					break;
				}
				case Port_PINX3:{
				if(GPIODATAF_BIT(Port_PINX3)==0x01)
						GPIODATAF_BIT(Port_PINX3)=0x00;
				else
				if(GPIODATAF_BIT(Port_PINX3)==0x00)
						GPIODATAF_BIT(Port_PINX3)=0x01;			
					break;
				}
				case Port_PINX4:{
				if(GPIODATAF_BIT(Port_PINX4)==0x01)
						GPIODATAF_BIT(Port_PINX4)=0x00;
				else
				if(GPIODATAF_BIT(Port_PINX4)==0x00)
						GPIODATAF_BIT(Port_PINX4)=0x01;			
					break;
				}
				case Port_PINX5:{
				if(GPIODATAF_BIT(Port_PINX5)==0x01)
						GPIODATAF_BIT(Port_PINX5)=0x00;
				else
				if(GPIODATAF_BIT(Port_PINX5)==0x00)
						GPIODATAF_BIT(Port_PINX5)=0x01;			
					break;
				}
			default:{}
		break;
	}		
}	
		
}
}

	