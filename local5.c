#include<stdio.h>
int main()
{
	int number,result=0,rem;
	printf("enter the number\n");
	scanf("%d",&number);
	while(number!=0)
	{
		rem=number%10;
		result+=rem;
		number/=10;
	}
	printf("the sumof all numbers is%d\n",result);
}


