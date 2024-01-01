#include<stdio.h>

int calc(int a, int b)

{
	int num, i;
	
	for(num=0;num<=6;num++)
	{
		printf("Enter the choice = " );
		scanf("%d" ,&num);
		
		switch (num)
		{
			case 1:
				printf("Enter the value of A = " );
				scanf("%d" ,&a);
				printf("Enter the value of B = " );
				scanf("%d" ,b);
				printf("Addition of A & B is = %d \n\n " ,a+b);
				break;
				
			case 2:
				printf("Enter the value of A = " );
				scanf("%d" ,&a);
				printf("Enter the value of B = " );
				scanf("%d" ,b);
				printf("Subtraction of A & B is = %d \n\n " ,a-b);
				break;


			case 3:
				printf("Enter the value of A = " );
				scanf("%d" ,&a);
				printf("Enter the value of B = " );
				scanf("%d" ,b);
				printf("Multilication of A & B is = %d \n\n " ,a*b);
				break;


			case 4:
				printf("Enter the value of A = " );
				scanf("%d" ,&a);
				printf("Enter the value of B = " );
				scanf("%d" ,b);
				printf("Division of A & B is = %d \n\n " ,a/b);
				break;


			case 5:
				printf("Enter the value of A = " );
				scanf("%d" ,&a);
				printf("Enter the value of B = " );
				scanf("%d" ,b);
				printf("Modulus of A & B is = %d \n\n " ,a%b);
				break;


			case 6:
				printf("Exit" );
				break;
				default:
					printf("please enter your choice ");
			
        }
	}
	return 0;
}

int main()

{ 
int a,b;
         printf("please enter 1 for addition\n " );
         printf("please enter 2 for subtraction\n " );
         printf("please enter 3 for multiplication\n " );
         printf("please enter 4 for division\n " );
         printf("please enter 5 for modulus\n " );
         printf("please enter 6 to exit " );
         
         calc(a,b);
             
}