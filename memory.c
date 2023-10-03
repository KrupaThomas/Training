#include<stdio.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned uint32_t;

int main()
{
	uint8_t str1[20],str2[20],str3[20],str4[20],str5[20],str[20],i,j,len =0,flag=0;
	uint8_t *ptr[5] = {str1, str2, str3, str4, str5},*point;

	point = str;
	
	for(i=0;i<5;i++)
	{
		printf("Enter the string: ");
		scanf("%s",ptr[i]);
	}

	/*for(i=0;i<5;i++)
	{
		printf("\n%s",ptr[i]);
	}*/

	printf("\nEnter the string to be searched: ");
	scanf("%s",point);
	
	for(i=0;*(point+i)!='\0';i++)
	{
		len++;
	}
	//printf("\n%s",point);
	//printf("\n%d",len);
	for(i = 0;i<5;i++)
	{
		for(j = 0;*(*(ptr+i)+j)!='\0';j++)
		{
			if(*(point+j)==*(*(ptr+i)+j))
			{
				if(j == len-1)
					flag++;
				continue;
			}
			else
				break;
		}
	}
	if(flag)
		printf("\nString is present");
	else
		printf("\nString not present");

	return 0;
}
