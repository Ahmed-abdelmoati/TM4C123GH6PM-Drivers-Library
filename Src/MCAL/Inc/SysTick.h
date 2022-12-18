/*
*FILE DESCRIPTION
*FILE:SYSTICK_H_ 
*MODULE:SYSTICK
*/
#include "../../Common/Std_Types.h"
#include "../../Common/Utilities.h"
#include "../../Common/Common.h"
#ifndef  SYSTICK_H_ 
#define  SYSTICK_H_ 
void vSysTick_Init(u32 Preload);
void vSysTick_Register(void (*p)(void));
void SysTick_Handler(void);
#endif /* SYSTICK_H_  */
