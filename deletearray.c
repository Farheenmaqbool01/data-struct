#include<stdio.h>
# define MAX_SIZE 100
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
	printf("enter  the element position  to delete:");
	scanf("%d",&pos);
	if (pos<0 || pos >size)
	{
		printf("deletion is not possible in the array");
	}
	else
	{
	for(i=pos-1;i<size-1;i++)
	{
		A[i]=A[i+1];
	}

	printf("\n The resultant array is: \n");
	for(i=0;i<size-1;i++)
	{
		printf("%d",A[i]);
	}
	return 0;
  
	}
}
