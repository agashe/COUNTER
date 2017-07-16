/*
 * config.c
 *
 * Created: 11/5/2016 4:50:59 PM
 *  Author: MOHAMED YOUSEF
 */ 

#include "config.h"

void Init_7_Segment(){
	DDRA = 0xff;
	DDRB = 0xff;
	DDRC = 0xff;
}

void a(){
	SET_BIT(PORTA, 0);
	SET_BIT(PORTA, 1);
	SET_BIT(PORTA, 2);
	SET_BIT(PORTA, 3);
}

void b(){
	SET_BIT(PORTB, 4);
	SET_BIT(PORTB, 5);
	SET_BIT(PORTB, 6);
}

void c(){
	SET_BIT(PORTB, 7);
	SET_BIT(PORTC, 6);
	SET_BIT(PORTC, 7);
}

void d(){
	SET_BIT(PORTB, 0);
	SET_BIT(PORTB, 1);
	SET_BIT(PORTB, 2);
	SET_BIT(PORTB, 3);
}

void e(){
	SET_BIT(PORTC, 3);
	SET_BIT(PORTC, 4);
	SET_BIT(PORTC, 5);
}

void f(){
	SET_BIT(PORTC, 0);
	SET_BIT(PORTC, 1);
	SET_BIT(PORTC, 2);
}

void g(){
	SET_BIT(PORTA, 4);
	SET_BIT(PORTA, 5);
	SET_BIT(PORTA, 6);
	SET_BIT(PORTA, 7);
}

void Clear_7_Segment(){
	uint8 i = 0;
	
	while(i != 8){
		CLR_BIT(PORTA, i);
		CLR_BIT(PORTB, i);
		CLR_BIT(PORTC, i);
		i++;
	}
}

void _7_Segment(uint8 N){
	
	switch (N)
	{
	case 0:
		a();
		b();
		c();
		d();
		e();
		f();
		SET_BIT(PORTA, 4);
		SET_BIT(PORTA, 7);
	break;
	
	case 1:
		b();
		c();
		SET_BIT(PORTA, 3);
		SET_BIT(PORTA, 7);
		SET_BIT(PORTB, 3);
	break;
	
	case 2:
		a();
		b();
		d();
		e();
		g();
	break;
	
	case 3:
		a();
		b();
		c();
		d();
		g();
	break;
	
	case 4:
		b();
		c();
		f();
		g();
		SET_BIT(PORTA, 0);
		SET_BIT(PORTA, 3);
		SET_BIT(PORTB, 3);
	break;
	
	case 5:
		a();
		c();
		d();
		f();
		g();
	break;
	
	case 6:
		a();
		c();
		d();
		e();
		f();
		g();
	break;
	
	case 7:
		a();
		b();
		c();
		SET_BIT(PORTA, 7);
		SET_BIT(PORTB, 3);
	break;
	
	case 8:
		a();
		b();
		c();
		d();
		e();
		f();
		g();
	break;
	
	case 9:
		a();
		b();
		c();
		d();
		f();
		g();
	break;
	}
}




