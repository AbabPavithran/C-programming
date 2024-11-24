#include<stdio.h>
int main()
{
	float celcius,farenheit;
	printf("enter the celcius :");
	scanf("%f",&celcius);
	farenheit=(celcius*9/5+32);
	printf("Farenheit   :   %f",farenheit);
	return 0;
}
