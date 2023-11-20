#include<reg51.h>
void main(){
unsigned char sine_val[12]={128,192,238,255,238,192,128,64,17,0,17,64};
			unsigned char x;
			while(1)
			{
				for(x=0;x<12;x++)
				{
				P1=sine_val[x];
				}
			}
}