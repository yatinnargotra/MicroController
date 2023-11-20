#include <reg51.h>
void MSDelay(unsigned int);
void main(void)
{
	while(1)
		{
				P1=0X55;
				MSDelay(1000);
				P1=0XAA;
				MSDelay(1000);
		}
}

void MSdelay(unsigned int itime)
{
	unsigned int i,j;
	for(i=0;i<itime;i++)
	{
		for(j=0;j<1275;j++)
		{
		}
	}
		
}