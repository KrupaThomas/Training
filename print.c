#include<stdio.h>
#include<stdint.h>
#include<stdarg.h>

void print(char *format,...);
int main()
{
	int var1;
	float var2;
	char var3[10];
	printf("Enter the values ");
	scanf("%d%f%s",&var1,&var2,var3);
	print("%d%f%s",var1,var2,var3);
	return 0;
}



	

void print(char *format,...)
{
	va_list ptr;
	va_start(ptr,*format);
	int i = 0;

while(format[i]!='\0')
{
	if(format[i] == '%')
	{
		i++;
		switch(format[i])
		{
			case 's' :  printf("%s\t", va_arg(ptr, char *));
						break;

			case 'd' :  printf("%d\t", va_arg(ptr, int));
						break;

			case 'f' :  printf("%f\t", va_arg(ptr, double));
						break;

			
		}
	}
	i++;
	
	

}
	
va_end(ptr);
}








