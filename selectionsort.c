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
	for(j=1;j<n-i;j++)
	{
		if(A[j]<A[pos])
		{
			pos=j;
		}
	     if(pos!=i)
	     {
			int temp=A[pos];
			A[pos]=A[i];
			A[i]=temp;
		}
	}
}
printf("after implementin selection sort");
for(i=0;i<n;i++)
{
	printf("%d",A[i]);
}
	return 0;
}

