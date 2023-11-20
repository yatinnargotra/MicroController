#include<p18f4550.h>
#include "vector_relocate.h"

#define LCD_DATA PORTD
#define ctlr  PORTE
#define rs PORTEbits.RE0
#define rw PORTEbits.RE1
#define en PORTEbits.RE2

void msdelay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<710;j++)
		{
		}
	}
}

void LCD_command(unsigned char cmd)
{
	LCD_DATA=cmd;
	rs=0;
	rw=0;
	en=1;
	msdelay(15);
	en=0;
}

void init_LCD(void)
{
	LCD_command(0x38);
	msdelay(15);
	LCD_command(0x01);
	msdelay(15);
	LCD_command(0x0C);
	msdelay(15);
	LCD_command(0x80);
	msdelay(15);
}

void LCD_data(unsigned char data)
{
	 LCD_DATA=data;
	 rs=1;
	 rw=0;
	 en=1;
	 msdelay(15);
	 en=0;
}

void LCD_write_string(static char *str)
{
	int i=0;
	while(str[i]!=0)
	{
		LCD_data(str[i]);
		msdelay(15);
		i++;
	}
}

void main(void)
{
	char var2[]="HI";
	char var1[]="Good Bye";
	
	ADCON1=0X0F;
	TRISD=0X00;
	TRISE=0X00;
	
	init_LCD();
	msdelay(50);
	
	LCD_write_string(var1);
	msdelay(50);
	LCD_command(0xC0);
	LCD_write_string(var2);
	while(1);
	
}

