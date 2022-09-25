
#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
/*Represent the root of binary tree*/
 struct Node*root=NULL,*temp,*trav;
 
struct Node*createNode(int data)
 {
 	int i,n;
	struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
	    temp->data=data;
         temp->left=NULL;
		 temp->right=NULL;
        return temp;
}
int check_prime(int n)
{
	int i;
	if(n<2)
	return 0;
	else if(n>2)
	{
		if(n%2==0)
		return 0;
		for( i=3;i<n;i++){
		if(n%i==0)
		return 0;
	}
}
return 1;
}
int isprime(struct Node *root)
	{
		if(root!=NULL)
		{
			if(check_prime(root->data)==1)
			printf("%d:",root->data);
			isprime(root->left);
			isprime(root->right);
		}
}

	
int main()
{
	// add node to the binary tree
  root=createNode(5);
  root->left=createNode(3);
  root->right=createNode(2);
  root->left->left=createNode(4);
  root->right->left=createNode(7);
  root->right->right=createNode(6);
  root->right->right->right=createNode(8);
  printf("prime nodes in binary tree:",isprime(root));
  
}
			
