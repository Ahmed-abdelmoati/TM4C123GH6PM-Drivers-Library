/*
*FILE DESCRIPTION
*FILE:SYSTICK_PROGRAM
*MODULE:SYSTICK
*/
/*INCLUDES*/
#include "../../Common/Std_Types.h"
#include "../../Common/Utilities.h"
#include "../../Common/Common.h"
#include "/Inc/SysTick_Types.h"
#include "/Inc/SysTick.h"
extern  SYSTICK_ConfigType SysTick;
void (*SysTickISR)(void);
void vSysTick_Init(u32 Preload){
STRELOAD=Preload;
STCURRENT=0x0;/*WRITE ANY VALUE*/
CLR_BIT(STCTRL,16);	
/*CLR_BIT(STCTRL,0);*/ /*Enable Timer*/ /*Make sure that enabled bit is disabled before init*/
STCTRL|=(u32)SysTick.xInterruptType<<1;
STCTRL|=(u32)SysTick.xClockSourceType<<2;
STCTRL|=(u32)SysTick.xSetType<<0;
//SET_BIT(STCTRL,0);
}
//SysTick_Handler
void vSysTick_Register(void (*p)(void)){
	/*if(p!='\0')*/
			SysTickISR=p;
}

void SysTick_Handler(void){
	SysTickISR();


}
void HardFault_Handler (void){} 
	