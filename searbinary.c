
#include <stdio.h>
#include <stdlib.h>
struct node 
{ 
    int data; 
    struct node *left, *right; 
}; 

// Function to create a new Node
struct node* newNode(int item) 
{
    struct node* temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->data = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 

 int search(struct node* root,int item)
{
	int  flag=0;
	while(root!=NULL)
	{
		if(root->data == item)
		{
			printf("element found");
		flag=1;
		break;}
	else if(item<root->data)
	root=root->left;
	else if (item>root->data)
	root=root->right;
}
if(flag==0)
printf("element not found");
}

int main() 
{ 
    /*Root is created first*/
    struct node* root = newNode(21);
    root->left = newNode(16);
    root->right = newNode(25);
    root->left->left = newNode(10);
    root->left->right = newNode(18);
    root->right->left = newNode(22);
    root->right->right = newNode(28);
    root->left->left->left = newNode(8);
    root->left->left->right = newNode(12);
     int item;
     printf("enter the item to found");
     scanf("%d",&item);
     int found = search(root,item);

    if(found)
        printf("%d value is found in the tree",item);
    else
        printf("%d value not found",item);

    return 0;
}
