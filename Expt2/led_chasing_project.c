 #include <reg51.h>
void MSDelay(unsigned int);
void main(void)
{
	while(1)
		{
				unsigned int z;
				P1=0X01;
				for(z=0;z<9;z++)
				{
					MSDelay(500);
					P1=P1<<1;
				}
				
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