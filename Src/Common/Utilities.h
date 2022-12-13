/*
* FILE DESCRIPTION
*---------------------------
*	         FILE: BIT_MATH (MACROS)
*/ 
#ifndef UTILITIES_H_
#define UTILITIES_H_
#define SET_BIT(R,INDEX)			  (R |= (1<<INDEX))
#define CLR_BIT(R,INDEX)		    (R &= (~(1<<INDEX)))
#define TOG_BIT(R,INDEX)		    (R ^= (1<<INDEX))
#define GET_BIT(R,INDEX)		    ((R>>INDEX) & 1)
#endif /* UTILITIES_H_ */
