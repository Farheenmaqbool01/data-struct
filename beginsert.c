#include<stdio.h>
int main()
{
	int A[60];
	int i,n,num,size,pos;
	printf("enter the size of array");
	scanf("%d",&size);
	printf("enter the number of  elements of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter  which position you want to delete");
	scanf("%d",&pos);
	if (pos<=0 || pos>size)
	{
		printf("valid position");
	}
	for(i=pos-1;i<size-1;i++)
	{
		A[i]=A[i=1];
	}
	size--;
	for(i=0;i<size;i--)
	{
		printf("%d",A[i]);
	}
  
	}
}
