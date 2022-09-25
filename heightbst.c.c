
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
	struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
	    temp->data=data;
         temp->left=NULL;
		 temp->right=NULL;
        return temp;
}
int findHeight(struct Node*temp)
{
	if(root==NULL)
	{

	printf("tree is empty");
	return 0;
}
	else
	{
		int leftHeight=0,rightHeight=0;
		if(temp->left!=NULL)
		leftHeight=findHeight(temp->left);
		if(temp->right!=NULL)
		rightHeight=findHeight(temp->right);
		int max=(leftHeight>rightHeight)?leftHeight:rightHeight;
		return(max+1);
	}
}
int main()
{
	// add node to the binary tree
  root=createNode(1);
  root->left=createNode(2);
  root->right=createNode(3);
  root->left->left=createNode(4);
  root->right->left=createNode(5);
  root->right->right=createNode(6);
  root->right->right->right=createNode(7);
  root->right->right->right->right=createNode(8);
  printf("maximum height of given binary tree : %d",findHeight(root));
  return 0;
}
			
