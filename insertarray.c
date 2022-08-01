#include<stdio.h>
int main()
{
	int A[60];
	int i,n,num=10,size,pos=3;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the number of  elements of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter the element you want to insert");
	scanf("%d",&num);
	printf("enter the position");
	scanf("%d",&pos);
	for(i=size-1;i<=pos-1;i--)
	{
		A[i+1]=A[i];
		
	}
	A[pos-1]=num;
	for(i=0;i<size;i++)
	{
		printf("%d",A[i]);
	}
	/* insert an element in the beginning of array*/
	for(i=size-1;i<=0;i--)
	{
		A[i+1]=A[i];
	}
	A[0]=num;
	for(i=0;i<size;i++)
	printf("%d",A[i]);
}
