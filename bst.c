#include<stdio.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node * root=NULL,*temp,*trav;
void main()
{
	int i,n;
	printf("enter the number of nodes to insert");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the data");
		scanf("%d",&temp->data);
		temp->left=temp->right=NULL;
		if(root==NULL)
		root=temp;
		else
		{
			trav=root;
			while(1)
			{
				if(temp->data<trav->data)
				{
					if(trav->left==NULL)
					{
						
					break;
				}
				else
				trav=trav->left;
			}
			
			else if (temp->data > trav->data)
			{
				if(trav->right==NULL)
				{
					trav->right=temp;
					break;
				}
				else
				trav=trav->right;
			}
			else
			printf("duplicate keys not allowed");
	}
}

}
}


		
	

