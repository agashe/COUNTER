/*
 * config.h
 *
 * Created: 11/5/2016 4:46:56 PM
 *  Author: MOHAMED YOUSEF
 */ 


#ifndef CONFIG_H_
#define CONFIG_H_


#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000ul

typedef unsigned char uint8;

#define CLR_BIT(reg,index)  reg&=(~(1<<index))
#define SET_BIT(reg,index)  reg|=(1<<index)
#define TOG_BIT(reg,index)  reg^=(1<<index)

void Init_7_Segment();

void a();
void b();
void c();
void d();
void e();
void f();
void g();

void Clear_7_Segment();

void _7_Segment(uint8 N);

#endif /* CONFIG_H_ */