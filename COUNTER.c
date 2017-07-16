/*
 * COUNTER.c
 *
 * Created: 11/5/2016 4:45:47 PM
 *  Author: MOHAMED YOUSEF
 */ 

#include "config.h"


int main(void)
{
	uint8 i = 0;
	
	Init_7_Segment();
	
	
		  
    while(1)
    { 
		for(i=0;i<10;i++){
			 _7_Segment(i);
			 _delay_ms(1000);
			 Clear_7_Segment();
	       	_delay_ms(500);
		}		
    }
}