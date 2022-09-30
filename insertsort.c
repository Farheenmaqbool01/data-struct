#include<stdio.h>
void insert(int A[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=A[i];
		
		j=i-1;
	
	while(j>=0 && temp<=A[j])
	{
		A[j+1]=A[j];
		
		j=j-1;
		}
		A[j+1]=temp;	
	}
}

void printArray(int A[],int size)
{
	int i;
	for(i=0; i<size ;i++)
	{
	printf("%d",A[i]);
}
    printf("\n");
}
int main()
{
	 int A[]={ 12, 31, 25, 8 };
	 int n=sizeof(A) / sizeof(A[0]);
	 printf("Before sorting array elements are-\n");
	 printArray(A,n);
	 insert(A,n);
	 printf("\nAfter sorting array elements are-\n");
	 printArray(A,n);
	 return 0;
}

