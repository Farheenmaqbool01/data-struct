#include<stdio.h>
int main()
{
	int a,base,b;
	int result;
	printf("enter the base value");
	scanf("%d",&base);
	printf("enter the  power value");
	scanf("%d",&b);
	result=power(base,b);
	printf("%d^%d=%d",base,b,result);
	
}
int power(int a,int b)
{
	if(b==1)
	return a;
	else
	return (a*power(a,b-1));
}
