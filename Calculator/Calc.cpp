#include<stdio.h>
#include<conio.h>
main()
{
	//clrscr();
	float num1;
	float num2;
char op;
	float result;
printf("Enter 1St Number");
scanf("%f",&num1);
		printf("Enter the operation:");
		scanf(" %c",&op);
printf("Enter the 2nd number:");
scanf("%f",&num2);
	switch(op)
	{
		case '_':
			result=num1-num2;
			printf("%f",result);
			break;
			
case '+':
			result=num1+num2;
			printf("%f",result);
			break;
			
		case '*':
			result=num1*num2;
			printf("%f",result);
			break;
			
case '/':
			result=num1/num2;
			printf("%f",result);
			break;
			
		default :
			printf("The Operator Is Not Valid");
			
		
}
		
		getch();
}
