#include<stdio.h>
int main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	printf("factorial of %d is %d",n, factorial(n));
	return 0;
}
int factorial(int n)
{
	if(n==0)
	return 1;
	else
	return(n*factorial(n-1));
}
