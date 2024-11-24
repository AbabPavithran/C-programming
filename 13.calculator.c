#include<stdio.h>
int main()
{
	int a,b,sum,difference,product,quotient,choice;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	while(choice!=5)
	{
	  printf("\n --- Menu---\n");
      printf("1.add\n");
      printf("2.substract\n");
      printf("3.multiply\n");
      printf("4.divide\n");
      printf("5.exit\n");
      printf("enter your choice:");
      scanf("%d",&choice);
    
    if(choice==1){
    	sum=a+b;
    	printf("sum = %d",sum); 
    }
    else if(choice==2){
    	difference=a-b;
    	printf("difference =  %d",difference);
	}
	else if(choice==3){
		product=a*b;
		printf("product = %d",product);
	}
	else if(choice==4){
		quotient=a/b;
		printf("quotient = %d",quotient);
	}
	else if(choice==5){
		return 0;
	}
	else{
		printf("choose a valid option");
	}
    }
    	
    	return 0;
}
