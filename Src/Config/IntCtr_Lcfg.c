/*
*FILE DESCRIPTION
*FILE: INTCTR_LCFG_C_ 
*MODULE: INTCTR
*/ 
#include "../MCAL/Inc/IntCtr_Types.h"
#include "/IntCtr_cfg.h"
extern IntCtr_ConfigType INTERUPTS[];
IntCtr_ConfigType INTERUPTS[INTCTR_SIZE]
=
{
/*IntCtr_IndexType	 ,IntCtr_Set_t ,IntCtr_GroupType,IntCtr_SubGroupType		*/
{IntCtr_GPIO_Port_A,IntCtr_Enable ,IntCtr_Group0  ,IntCtr_SubGroup2},
{IntCtr_GPIO_Port_B,IntCtr_Enable ,IntCtr_Group1  ,IntCtr_SubGroup3},
{IntCtr_GPIO_Port_C,IntCtr_Enable ,IntCtr_Group0  ,IntCtr_SubGroup0}
};
extern IntCtr_FaultConfigType FAULTS[];
IntCtr_FaultConfigType FAULTS[INTCTR_FAULTSIZE]
=
{
/*IntCtr_FaultType	 ,IntCtr_FaultStatusType ,IntCtr_FaultPriorityType,		*/
	{IntCtr_SysTick		 ,IntCtr_FaultEnable    ,IntCtr_FaultPriority0},
};
/*  */
