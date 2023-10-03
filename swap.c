#include<stdio.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned uint32_t;

int main()
{
	uint16_t var1,var2,*ptr1,*ptr2,temp;
	printf("Enter two numbers: ");
	scanf("%hd%hd",&var1,&var2);
	ptr1 = &var1;
	ptr2 = &var2;
	printf("\nOld values are: %d ,%d",*ptr1,*ptr2);
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	printf("\nNew values are: %d ,%d",*ptr1,*ptr2);

	return 0;
}
