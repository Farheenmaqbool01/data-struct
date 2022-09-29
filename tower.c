#include<stdio.h>
void TOH(int ,char,char,char);
int main()
{
	int n;
	printf("enter the number of disks");
	scanf("%d",&n);
	TOH(n,'A','B','C');
}
void TOH(int n,char big,char mid,char end)
{
	if(n==1)
	{
	printf("\n %c->%c",big,end);
}
	else{
		TOH(n-1,big,end,mid);
		printf("\n %c->%c",big,end);
		TOH(n-1,mid,big,end);
	}
}
