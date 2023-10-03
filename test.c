#include<stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned uint32_t;

int main()
{
	uint16_t num1,num2,*p1,*p2;
	uint8_t condn,var;
	var = 10;
	*p1 = &var;
	printf("\n%d",*p1);
	printf("\n%x",p1);
	printf("%d",var);
	printf("%x",&var);
	/*printf("Enter two numbers: ");
	scanf("%hd%hd",&num1,&num2);
	p1 = &num1;
	p2 = &num2;
	printf("\nEnter operation A,S,D or M: ");
	scanf(" %c",&condn);

	//based on char perform operation
	switch(condn)
	{
		case 'A' : printf("\nSum is: %d",*p1+*p2);
			   break;

		case 'S' : printf("\nDifference is: %d ",*p1-*p2);
			   break;

		case 'D' : printf("\nQuotient is: %d",(*p1/(*p2)));
			   break;
		case 'M' : printf("\nProduct is: %d",((*p1)*(*p2)));
			   break;
		default  : printf("\nEnter a valid option");
			   break;
	}
	*/
return 0;
}
