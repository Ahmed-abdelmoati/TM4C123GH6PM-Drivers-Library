/*
*FILE DESCRIPTION
*FILE:INTCTR_TYPES_H_
*MODULE:INTCTR 
*/
#ifndef INTCTR_TYPES_H_ 
#define INTCTR_TYPES_H_ 
typedef enum {
	IntCtr_GPIO_Port_A,
	IntCtr_GPIO_Port_B,
	IntCtr_GPIO_Port_C,
	IntCtr_GPIO_Port_D,
	IntCtr_UART0,
	IntCtr_UART1,
	IntCtr_SSI0,
	IntCtr_I2C,
	IntCtr_PWM0Fault,
	IntCtr_PWM0Generator0,
	IntCtr_PWM0Generator1,
	IntCtr_QEI0,
	IntCtr_ADC0Sequence0,
	IntCtr_ADC0Sequence1,
	IntCtr_ADC0Sequence2,	
	IntCtr_ADC0Sequence3,
	IntCtr_WatchdogTimers0_AND_1,	
	IntCtr_16_32_Bit_Timer0A,	
	IntCtr_16_32_Bit_Timer0B,	
	IntCtr_16_32_Bit_Timer1A,	
	IntCtr_16_32_Bit_Timer1B,
	IntCtr_16_32_Bit_Timer2A,	
	IntCtr_16_32_Bit_Timer2B,	
	IntCtr_AnalogComparator0,	
	IntCtr_AnalogComparator1,	
	IntCtr_Reserved27,	
	IntCtr_SystemControl,
	IntCtr_FlashMemoryControl_AND_EEPROMControl,
	IntCtr_GPIO_Port_F,	
	IntCtr_Reserved31,	
	IntCtr_Reserved32,
	IntCtr_IndexTypeSize
}IntCtr_IndexType;
typedef enum {
	IntCtr_Disable,
	IntCtr_Enable,
	IntCtr_StatusTypeSize
}IntCtr_StatusType;

typedef enum {
	IntCtr_Group0,
	IntCtr_Group1,
	IntCtr_Group2,
	IntCtr_Group3,
	IntCtr_Group4,
	IntCtr_Group5,
	IntCtr_Group6,
	IntCtr_Group7,	
	IntCtr_GroupTypeSize
}IntCtr_GroupType;
typedef enum {
	IntCtr_SubGroup0,
	IntCtr_SubGroup1,
	IntCtr_SubGroup2,
	IntCtr_SubGroup3,
	IntCtr_SubGroup4,
	IntCtr_SubGroup5,
	IntCtr_SubGroup6,
	IntCtr_SubGroup7,	
	IntCtr_SubGroupTypeSize
}IntCtr_SubGroupType;
typedef struct {
IntCtr_IndexType xindex;
IntCtr_StatusType	xSet;
IntCtr_GroupType	xGroup;
IntCtr_SubGroupType	xSubGroup;
}IntCtr_ConfigType;

typedef enum {
	IntCtr_SysTick, /*Complete other Faults*/
	IntCtr_FaultIndexTypeSize
}IntCtr_FaultType;
typedef enum {
	IntCtr_FaultPriority0,
	IntCtr_FaultPriority1,
	IntCtr_FaultPriority2,
	IntCtr_FaultPriority3,
	IntCtr_FaultPriority4,
	IntCtr_FaultPriority5,
	IntCtr_FaultPriority6,
	IntCtr_FaultPriority7,
	IntCtr_FaultPriorityTypeSize
}IntCtr_FaultPriorityType;
typedef enum {
	IntCtr_FaultDisable,
	IntCtr_FaultEnable,
	IntCtr_FaultStatusTypeSize
}IntCtr_FaultStatusType;

typedef struct {
IntCtr_FaultType xindex;
IntCtr_FaultStatusType	xSet;
IntCtr_FaultPriorityType	xPriority;
}IntCtr_FaultConfigType;



#endif /* INTCTR_TYPES_H_ */
