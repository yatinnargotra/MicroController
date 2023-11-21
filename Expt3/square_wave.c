//Square Wave Generation
#include<reg51.h>
void MSDelay(unsigned int);
void main()
{
while(1)
{
	P1 = 0X00;
	MSDelay(100);
	P1 = 0XFF;
	MSDelay(100);
}
}
void MSDelay(unsigned int itime)
{
unsigned int i,j;
for(i=0;i<itime;i++)
{
for(j=0;j<1275;j++)
{
}
}
}