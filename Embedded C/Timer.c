#include<reg51.h>
void DELAY(void);
void main(void)
{
	while(1)
	{
	P1 = 0x55;
	DELAY();
	P1 = 0xAA;
	DELAY();
	}
}


void DELAY(void)
{
	TMOD =0x01;
	TH0 = 0xff;
	TL0 = 0xff;
	TR0=1;
	while(TF0 ==0);
	TR0 = 0;
	TF0 =0;
	}