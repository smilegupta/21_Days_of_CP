#include<stdio.h>
#include<string.h>

void main()
{
	int a;
	float b;
	char c[20];
	
	scanf("%d",a);
	scanf("%f",b);
	scanf("%s",c);
	
	
	char e[]="Hacktoberfest";
	printf("%d\n",a+(int)b);
	printf("%f\n",2*b);
	printf("%s %s",e,c);	
	
}
