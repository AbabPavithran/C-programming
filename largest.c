#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d is largest ",a);
	}
	else
	{
		printf("%d is largest ",b);
	}
	return 0;
}