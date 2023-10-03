#include<stdio.h>

#define ADD 3

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned uint32_t;

int main()
{
	uint8_t a = 10,b = 20;
	uint16_t c = 40,d = 30;
	uint32_t e = 50,f = 60;

	#if(ADD == 1)
		printf("8 bit addition result is: %d",a+b);
	#elif(ADD == 2)		
		printf("16 bit addition result is: %d",c+d);
	#else		
		printf("32 bit addition result is: %d",e+f);
	#endif

	return 0;
}
