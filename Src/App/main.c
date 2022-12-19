#include "../Common/Std_Types.h"
#include "../Common/Utilities.h"
#include "../MCAL/Inc/Port.h"
#include "../MCAL/Inc/Dio.h"
#include "../MCAL/Inc/IntCtr.h"
#include "../MCAL/Inc/SysTick.h"
#include "../MCAL/Inc/Led.h"
extern Port_ConfigType PORT[];
/*The next definitions are based on current configration*/
#define None  0x0
#define _1st  0x1
#define Sec   0x2
#define Third 0x3
#define Pressed Dio_LOW
u32 T_On=0;	/*Actual Ton*/
u32 T_Off=0;/*Actual Toff*/
u32 T_OnFlag=1;/*Used to generate pwm */
u32 Count=0;/*Overflows number*/
u32 NumberofPresses=None;
u32 T_Ontmp=0;
u32 T_Offtmp=0;	
void PMW(void);
void ChangeTimeUponRequest(void);
int main() {

vPort_Init(PORT);
vIntCtrInit();
vSysTick_Register(PMW);
vSysTick_Init(15999); /*Overflow every One msec -> F*Period-1=Preload*/
if(T_On==0)	vLed_Off(Port_F,Port_PINX2);	/*Special case because i started with gpio pin low (Led in off state)*/
else	
vLed_On(Port_F,Port_PINX2);
	
while(1){
ChangeTimeUponRequest();	
}
return 0;
}

void PMW(void){
if(T_On==0)	vLed_Off(Port_F,Port_PINX2);	
else if(T_On*1000>=Count&&T_OnFlag==1&&T_On!=0){
		vLed_On(Port_F,Port_PINX2);	
}
else {
	T_OnFlag=0;
}
if((T_On+T_Off)*1000>=Count&&T_OnFlag==0&&T_Off!=0){
		vLed_Off(Port_F,Port_PINX2);	
}
else if((T_On+T_Off)*1000<=Count)
{T_OnFlag=1;
	Count=0;
}
Count++;

}
void ChangeTimeUponRequest(void){
if(NumberofPresses==_1st){ /*First press of Second button(the confirmation button Port_PINF1) enable you to change ton using Button at pinF0 ( increase Ton by 1sec per one press) */
		if(xDio_ReadChannel(Port_F,Port_PINX4)==Pressed)
				T_Ontmp++;
	}
else if(NumberofPresses==Sec){ /* Sec press of Second button(the confirmation button Port_PINF1) enable you to change toff using Button at pinF0( increase Toff by 1sec per one press) */
		if(xDio_ReadChannel(Port_F,Port_PINX4)==Pressed)
				T_Offtmp++;
	}
else if(NumberofPresses==Third){
	/* Third press of Second button(the confirmation button Port_PINF1) will set required Ton&Toff and rest overflows number */
	/*and initialize Second button(the confirmation button)to be pressed 0 times*/
NumberofPresses=None; T_On=T_Ontmp;	T_Off=T_Offtmp;
	Count=0;/*Rest counter*/
T_Ontmp=0;/*Temporary stores required Ton*/
T_Offtmp=0;/*Temporary stores required Tof*/
}
else{
	
}
if(xDio_ReadChannel(Port_F,Port_PINX0)==Pressed){ /*Check if Second button(the confirmation button) is pressed or not (How many is pressed)*/
		NumberofPresses++;
	}	
}
