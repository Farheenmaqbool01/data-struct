#include<stdio.h>
int main()
{
	int i,n,j;
	int A[100],pos=i;
	printf("enter the number of elements in an array");
	scanf("%d",&n);
	printf("enter the value of elements");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n-i;j++)
	{
		if(A[j]>A[j+1])
		{
			int temp=A[j];
			A[j]=A[j+1];
			A[j+1]=temp;
		}
	}
}
printf("after implementin bubble sort");
for(i=0;i<n;i++)
{
	printf("%d",A[i]);
}
	return 0;
}

