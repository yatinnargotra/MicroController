#include<reg51.h>
void msDelay(unsigned int );
void main(){
	while(1){
	int i;
	for(i=0;i<=255;i++){
		P1=i;
		msDelay(100);
		}
		for(i=255;i>=0;i--){
		P1=i;
		msDelay(100);
		}
	}
}
void msDelay(unsigned int itime)
{	
	unsigned int i,j;
	for(i=0;i<itime;i++)
	{
		for(j=0;j<1275;j++)
		{
		}
	}
}