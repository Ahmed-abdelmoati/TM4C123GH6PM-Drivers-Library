/*
*FILE DESCRIPTION
*FILE:INTCTR_PROGRAM
*MODULE:INTCTR
*/
/*INCLUDES*/
#include "../../Common/Std_Types.h"
#include "../../Common/Utilities.h"
#include "../../Common/Common.h"
#include "../Config/IntCtr_Cfg.h"
#include "/Inc/IntCtr_Types.h" 
#include "/Inc/IntCtr.h"
/* LOCAL MACROS*/
/*LOCAL DATATYPES*/
#define APINT (*((volatile u32*)(INTCTR_BASE_ADDRESS+APINT_OFFEST)))
#define PRI_REG(index) (*((volatile u32*)(INTCTR_BASE_ADDRESS+PRI0_OFFEST+((index/4)*4))))
#define DIS_REG(index) (*((volatile u32*)(INTCTR_BASE_ADDRESS+DIS0_OFFEST+((index/32)*32))))
#define EN_REG(index)  (*((volatile u32*)(INTCTR_BASE_ADDRESS+EN0_OFFEST+((index/32)*32))))
#define SYSPRI3 (*((volatile u32*)(INTCTR_BASE_ADDRESS+SYSPRI3OFFSET)))	 /*TICK 29:31*/
#define SYSHNDCTRL (*((volatile u32*)(INTCTR_BASE_ADDRESS+SYSHNDCTRLOFFSET)))	 /*TICK 11*/	
/*LOCAL FUNCTIONS PROTOTYPES */
/*GLOBAL STATIC VARS*/
/*GLOBAL EXTERN VARS*/
extern  IntCtr_ConfigType INTERUPTS[INTCTR_SIZE];
extern IntCtr_FaultConfigType FAULTS[INTCTR_FAULTSIZE];
/*LOCAL FUNCTIONS IMP*/
/* APIS IMP*/
void vIntCtrInit(void){
	u8 u8Index=0;
						/**Thread mode (privilege)**/
	#if  (intrctr_8Groups_1SubGroups==INT_GROUPS_CTRL)
		APINT|=((u32)0xFA05)<<(u32)0x10| ((u32)0x0400);	 
	#elif(intrctr_4Groups_2SubGroups==INT_GROUPS_CTRL)
		APINT|=((u32)0xFA05)<<(u32)0x10| ((u32)0x0500);	 	
	#elif(intrctr_2Groups_4SubGroups==INT_GROUPS_CTRL)
		APINT|=((u32)0xFA05)<<(u32)0x10| ((u32)0x0600);
	#elif(intrctr_1Groups_8SubGroups==INT_GROUPS_CTRL)
		APINT|=((u32)0xFA05)<<(u32)0x10| ((u32)0x0700);
	#else
		/*	*/
	#endif
for(u8Index=0;u8Index<INTCTR_SIZE;u8Index++){
	u8 u8Priority=0;
	u8 u8GPriority=(u8)(INTERUPTS[u8Index].xGroup);
	u8 u8SubGPriority=(u8)(INTERUPTS[u8Index].xSubGroup);
	IntCtr_SubGroupType u8IntIndex=(u8)(INTERUPTS[u8Index].xindex);	
	if  (intrctr_8Groups_1SubGroups==INT_GROUPS_CTRL)
		u8Priority=u8GPriority; 
	else if(intrctr_4Groups_2SubGroups==INT_GROUPS_CTRL)
		u8Priority= ((u8GPriority&0x03)<<(u8)0x1) |(u8SubGPriority&(u8)0x01); 	
	else if(intrctr_2Groups_4SubGroups==INT_GROUPS_CTRL)
		u8Priority=((u8GPriority&0x03)<<(u8)0x2) |(u8SubGPriority&(u8)0x03); 
	else if(intrctr_1Groups_8SubGroups==INT_GROUPS_CTRL)
		u8Priority=u8SubGPriority; 
	else{
		/*u8Priority=0x00; IntCtr*/
	}
	switch(u8IntIndex%4){
		case 0:{
			PRI_REG(u8IntIndex)|=	((u32)u8Priority)<<0x05;
			break;
		}
		case 1:{
			PRI_REG(u8IntIndex)|=	((u32)u8Priority)<<0xD;
			break;
		}
		case 2:{
			PRI_REG(u8IntIndex)|=	((u32)u8Priority)<<0x15;
			break;
		}
		case 3:{
			PRI_REG(u8IntIndex)|=	((u32)u8Priority)<<0x1D;
			break;
		}
	}
	if(u8IntIndex<32)
	EN_REG(u8IntIndex)|=(u32)0x1<<(u32)u8IntIndex;
	else if(u8IntIndex<64)
	EN_REG(u8IntIndex)|=(u32)0x1<<(u32)(u8IntIndex-32);
	else if(u8IntIndex<96)
	EN_REG(u8IntIndex)|=(u32)0x1<<(u32)(u8IntIndex-64);
	else if(u8IntIndex<128)
	EN_REG(u8IntIndex)|=(u32)0x1<<(u32)(u8IntIndex-96);
	else if(u8IntIndex<138)
	EN_REG(u8IntIndex)|=(u32)0x1<<(u32)(u8IntIndex-128);
	else{
	}
}

for(u8Index=0;u8Index<INTCTR_FAULTSIZE;u8Index++){
	u8 u8Priority=(u8)(FAULTS[u8Index].xPriority);
	u8 Status=(u8)(FAULTS[u8Index].xSet);
	u8 Index=(u8)(FAULTS[u8Index].xindex);
switch(Index){
	case IntCtr_SysTick:{
			SYSPRI3|=(u32)(u8Priority)<<29;
			/* PRIMASK & BASEPRI& FAULTMASK STARTS with 0x0*/
		break;
	}
}
}
}