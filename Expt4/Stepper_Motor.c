#include <reg51.h>
void MSDelay(unsigned int t);

int main(){
while(1)
{
P1=0X06;
MSDelay(200);
P1=0X0C;
MSDelay(200);
P1=0X09;
MSDelay(200);
P1=0X03;
MSDelay(200);
}
}
void MSDelay(unsigned int t)
{
	
	unsigned int i,j;
	for(i=0;i<t;i++){
		for(j=0;j<1275;j++){
	}
}
}