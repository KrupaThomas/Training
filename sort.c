#include<stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned uint32_t;

int main()
{
	uint16_t arr[10],*ptr,j,i,temp;
	ptr = arr;
	printf("Enter 10 values: ");
	for(i = 0; i<10 ;i++)
	{
		scanf("%hd",(ptr+i));
	}
	printf("\nAscending order: ");
	for(i = 0;i<10;i++)
		{
			for(j = 0;j<9-i;j++)
			{
				if(ptr[j]>ptr[j+1])
				{
					temp = ptr[j];
					ptr[j] = ptr[j+1];
					ptr[j+1] = temp;
				}
			}
		}
	for(i = 0;i<10;i++)
	{
		printf("%d ",ptr[i]);
	}
	ptr = &arr[9];
	printf("\nDescending order: ");
	for(i = 0;i<=9;i++)
		printf("%d ",*(ptr-i));
				
	return 0;
}
