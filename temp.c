#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a is %d\n",a);
	printf("b is %d",b);
	return 0;
}
