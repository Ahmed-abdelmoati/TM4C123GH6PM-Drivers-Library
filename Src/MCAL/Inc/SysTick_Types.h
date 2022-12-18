/*
*FILE DESCRIPTION
*FILE:SYSTICK_TYPES_H_ 
*MODULE:SYSTICK
*/
#ifndef  SYSTICK_TYPES_H_ 
#define  SYSTICK_TYPES_H_ 
typedef enum {
SYSTICK_ClockSourcePIOSC,
SYSTICK_SystemClock,
SYSTICK_ClockSourceTYPESize	
}SYSTICK_ClockSourceType ;

typedef enum {
SYSTICK_InterruptDisable,
SYSTICK_InterruptEnable,
SYSTICK_InterruptTypeSize
}SYSTICK_InterruptType ;
typedef enum {
SYSTICK_Disabled,
SYSTICK_Enabled,
SYSTICK_SetTypeSize
}SYSTICK_SetType ;

typedef struct {
SYSTICK_ClockSourceType xClockSourceType;
SYSTICK_InterruptType	xInterruptType;
SYSTICK_SetType 	xSetType; 
}SYSTICK_ConfigType ;

#endif /* SYSTICK_TYPES_H_  */
