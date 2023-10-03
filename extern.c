#include<stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned uint32_t;

uint32_t varx = 10;

int main()
{
	uint32_t varx = 50;
	{
		extern uint32_t varx;

		printf("%d %d",varx,try);
	
	}
	return 0;

}
