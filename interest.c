#include<stdio.h>
int main()
{
	float interest,p,r,t;
	printf("enter the pricipal amount");
	scanf("%f",&p);
	printf("enter the rate ");
	scanf("%f",&r);
	printf("enter the time");
	scanf("%f",&t);
	interest=p*r*t;
	printf("%f is interest",interest);
	return 0;
	
}
