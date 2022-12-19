/*
* FILE DESCRIPTION
*---------------------------
*	         FILE: Common (MACROS)
*/
#ifndef COMMON_H
#define COMMON_H
#define INTCTR_BASE_ADDRESS (0xE000E000)
#define EN0_OFFEST  0x100
#define DIS0_OFFEST 0x180
#define PRI0_OFFEST 0x400
#define APINT_OFFEST 0xD0C
#define SYSPRI3OFFSET 0xD20
#define SYSHNDCTRLOFFSET 0xD24
#define SYSHNDCTRL (*(volatile u32*)(SYSHNDCTRLOFFSET+INTCTR_BASE_ADDRESS))
/* TASKPRIMASK & BASEPRI& FAULTMASK */
#define GPIODATAOFFSET		0x000 	 /*The GPIODATA register is the data register.*/
#define GPIODIROFFSET	0x400	 /*The GPIODIR register is the data direction register.*/
#define GPIOISOFFSET		0x404  /*The GPIOIS register is the interrupt sense register.P664*/	
#define GPIOIBEOFFSET	0x408  /*The GPIOIBE register allows both edges to cause interrupts.P665*/	
#define GPIOIEVOFFSET  0x40C /*The GPIOIEV register is the interrupt event register.P666*/	
#define GPIOIMOFFSET	0x410 /*The GPIOIM register is the interrupt mask register.P667*/	
#define GPIORISOFFSET	0x414 /*The GPIORIS register is the raw interrupt status register.P668*/	
#define GPIOMISOFFSET	0x418 /*The GPIOMIS register is the masked interrupt status register.P669*/	
#define GPIOICROFFSET	0x41C /*The GPIOICR register is the interrupt clear register.P669*/	
#define GPIOAFSELOFFSET 0x420 /*The GPIOAFSEL register is the mode control select register.P671*/	
#define GPIODR2ROFFSET	0x500 /*The GPIODR2R register is the 2mA drive control register.P673*/
#define GPIODR4ROFFSET	0x504 /*The GPIODR2R register is the 4mA drive control register.P674*/
#define GPIODR8ROFFSET	0x508 /*The GPIODR2R register is the 4mA drive control register.P675*/
#define GPIOODROFFSET	0x50C /*The GPIOODR register is the open drain control register.P676*/
#define GPIOPUROFFSET	0x510 /*The GPIOPUR register is the pullup control register.P677*/
#define GPIOPDROFFSET	0x514 /*The GPIOPDR register is the pulldown control register.P678*/
#define GPIOSLROFFSET	    0x518 /*The GPIOSLR register is the slew rate control register.P681*/
#define GPIODENOFFSET	    0x51C /*The GPIODEN register is the digital enable register.P682*/
#define GPIOLOCKOFFSET	    0x520 /*The GPIOLOCK register enables write access to the GPIOCR register. P684*/
#define GPIOCROFFSET	    0x524 	 /*The GPIOCR register is the commit register.P685*/
#define GPIOAMSELOFFSET	    0x528 	 /*The GPIOAMSEL register controls isolation circuits to the analog side of a unified IO pad.P687*/
#define GPIOPCTLOFFSET	    0x52C 	 /*The GPIOPCTL register is used in conjunction with the GPIOAFSEL register and selects the specific
peripheral signal for each GPIO pin when using the alternate function modeP688. */
#define GPIOADCCTLOFFSET	    0x530 	 /*This register is used to configure a GPIO pin as a source for the ADC trigger.*/
#define GPIODMACTLOFFSET	    0x534 	 /*This register is used to configure a GPIO pin as a source for the μDMA trigger.*/
/**Task: compelete registers (identification)**/
#define GPIOPORTA_APB_BASE   0x40004000
#define GPIOPORTA_AHB_BASE  0x40058000
#define GPIOPORTB_APB_BASE   0x40005000
#define GPIOPORTB_AHB_BASE   0x40059000
#define GPIOPORTC_APB_BASE   0x40006000
#define GPIOPORTC_AHB_BASE  0x4005A000
#define GPIOPORTD_APB_BASE   0x40007000
#define GPIOPORTD_AHB_BASE  0x4005B000
#define GPIOPORTE_APB_BASE    0x40024000
#define GPIOPORTE_AHB_BASE   0x4005C000
#define GPIOPORTF_APB_BASE    0x40025000/*used*/
#define GPIOPORTF_AHB_ BASE  0x4005D000
#define PERIPHERAL_BITBAND_ALIAS_BASE 0x42000000
#define GPIODATAF_1ST_BYTEOFFEST (u32)((0x40025000+0x3FC)*32) 
#define GPIODATAF_BIT(i) (*(volatile u32*)(GPIODATAF_1ST_BYTEOFFEST+PERIPHERAL_BITBAND_ALIAS_BASE+i*4))
/*Define registers for PORTF*/
/**Task: Define registers for other ports**/
#define GPIODATAF 		(*(volatile u32*)(GPIODATAOFFSET+GPIOPORTF_APB_BASE+0x3FC))
#define GPIODIRF 			(*(volatile u32*)(GPIODIROFFSET+GPIOPORTF_APB_BASE))	
#define GPIOISF 				(*(volatile u32*)(GPIOISOFFSET+GPIOPORTF_APB_BASE))		
#define GPIOIBEF			(*(volatile u32*)(GPIOIBEOFFSET+GPIOPORTF_APB_BASE))	
#define GPIOIEF				(*(volatile u32*)(GPIOIEVOFFSET+GPIOPORTF_APB_BASE))
#define GPIOIMF			(*(volatile u32*)(GPIOIMOFFSET+GPIOPORTF_APB_BASE))
#define GPIORISF			(*(volatile u32*)(GPIORISOFFSET+GPIOPORTF_APB_BASE))	
#define GPIOMISF			(*(volatile u32*)(GPIOMISOFFSET+GPIOPORTF_APB_BASE))	
#define GPIOICRF			(*(volatile u32*)(GPIOICROFFSET+GPIOPORTF_APB_BASE))
#define GPIOAFSELF		(*(volatile u32*)(GPIOAFSELOFFSET+GPIOPORTF_APB_BASE))
#define GPIODR2RF		(*(volatile u32*)(GPIODR2ROFFSET+GPIOPORTF_APB_BASE))	
#define GPIODR4RF		(*(volatile u32*)(GPIODR4ROFFSET+GPIOPORTF_APB_BASE))
#define GPIODR8RF		(*(volatile u32*)(GPIODR8ROFFSET+GPIOPORTF_APB_BASE))	
#define GPIOODRF			(*(volatile u32*)(GPIOODROFFSET+GPIOPORTF_APB_BASE))
#define GPIOPURF			(*(volatile u32*)(GPIOPUROFFSET+GPIOPORTF_APB_BASE))
#define GPIOPDRF			(*(volatile u32*)(GPIOPDROFFSET+GPIOPORTF_APB_BASE))
#define GPIOSLRF 		(*(volatile u32*)(GPIOSLROFFSET+GPIOPORTF_APB_BASE))  
#define GPIODENF 			(*(volatile u32*)(GPIODENOFFSET+GPIOPORTF_APB_BASE))   
#define GPIOLOCKF		(*(volatile u32*)(GPIOLOCKOFFSET	+GPIOPORTF_APB_BASE))   
#define GPIOCRF 			(*(volatile u32*)(GPIOCROFFSET+GPIOPORTF_APB_BASE))    
#define GPIOAMSELF	(*(volatile u32*)(GPIOAMSELOFFSET+GPIOPORTF_APB_BASE))   
#define GPIOPCTLF 		 (*(volatile u32*)(GPIOPCTLOFFSET+GPIOPORTF_APB_BASE))	   	 
#define GPIOADCCTLF  (*(volatile u32*)(GPIOADCCTLOFFSET+GPIOPORTF_APB_BASE))	    	 
#define GPIODMACTLF (*(volatile u32*)(GPIODMACTLOFFSET+GPIOPORTF_APB_BASE))	  
#define SYSCTL_RCGCGPIO_R (*(( volatile u32 *)0x400FE608))
#define STCTRLOFFSET 0x010
#define STRELOADOFFSET 	0x014
#define STCURRENTOFFSET  0x018
#define STCTRL		(*(volatile u32*)(STCTRLOFFSET+INTCTR_BASE_ADDRESS))	 
#define STRELOAD	(*(volatile u32*)(STRELOADOFFSET+INTCTR_BASE_ADDRESS))	 
#define STCURRENT	(*(volatile u32*)(STCURRENTOFFSET+INTCTR_BASE_ADDRESS))	 
	
#endif /* COMMON_H */
