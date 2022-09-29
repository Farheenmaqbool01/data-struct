#include<stdio.h>
int main()
{
	int n,binary;
	printf("enter the decimal number");
	scanf("%d",&n);
	printf("decimal(%d)=binary(%d)\n",n,decimal_binary(n));
}
int decimal_binary(int n)
{
	if(n==0)
	return 0;
	else if (n==1)
	return 1;
	else
   return ((n%2)+10*decimal_binary(n/2));
}
