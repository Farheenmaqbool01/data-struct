#include<stdio.h>
#include<stdlib.h>
void insert();
void view();
void create();
void delete();

struct node
{
	int data; 
	struct node*next;
};
  struct node *head=NULL,*tail=NULL;
  
  int main()
  {
  	int ch;
  	while(1)
  	{
  		printf("Enter 1 for create  2 for view 3  for insert 4 for delete 5 for exit");
  		printf("\n");
  		scanf("%d",&ch);
  		if(ch==1)create();
  		if (ch==2)view();
  		if(ch==3)insert();
  		if(ch==4)delete();
  		if(ch==5)break;
	  }
}
void create()
{
	
 	struct node*temp,*trav;
 	int i,n,data;
   temp = (struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
   printf("enter the number of nodes to insert ");
   scanf("%d",&n);
   for(i=0;i<n;i++) 
   {
    temp = (struct node*)malloc(sizeof(struct node));
    printf("enter the data");
    scanf("%d",&temp->data);
    temp->next=NULL;
    
    if(head==NULL)
    {
    	head=temp;
    	tail=temp;
    
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}
}  
}
 void insert()
 {
 	struct node*temp,*trav;
 	int value;
   temp = (struct node*)malloc(sizeof(struct node));
    temp->next=NULL;
   printf("enter value you want to insert");
   scanf("%d",&temp->data);
   printf("enter the value after you want to insert");
   scanf("%d",&value);
   trav=head;
   while(trav->data!=value)
   {
   	trav=trav->next;
   temp->next=trav->next;
   trav->next=temp;
}
}
void view()
{
	struct node *trav;
	
	trav=head;
	while(1)
	{
		printf("%d",trav->data);
		if(trav==tail)
		break;
		else
		trav=trav->next;
	}	
}
void delete()
{
	int item;
	printf("enter the node you want to delete");
	scanf("%d",&item);
	struct node *temp,*trav;
	if(head->data==item)
	{
		temp=head;
		head=head->next;
		free(temp);	
	}
	else
	{
		trav=head;
		while(trav->next->data!=item)
		{
			trav=trav->next;
			temp=trav->next;	
		}
		if(trav->next==tail)
		{
			trav->next=NULL;
			free(temp);
		}
		else
		{
			trav->next=trav->next->next;
			free(temp);
		}
	}
	
}





