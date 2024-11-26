#include<stdio.h>
int main()
{
	int mark,n;
	printf("Enter the Mark : ");
	scanf("%d",&mark);
	if(mark>100)
		printf("Enter a valid Mark");
	else if(mark>=90)
		printf("Grade : A");
	else if(mark>=76)
		printf("Grade : B");
	else if(mark>=66)
		printf("Grade : C");
	else if(mark>=55)
		printf("Grade : D");
	else
		printf("Failed");
	return 0;
}
