include<stdio.h>
# define max 100
void enqueue(int);
int dequeue();
void view();
int queue[max];
int front=0,rear=-1;
int main()
{
	int ch,item;
	while(1)
	{
		printf("1 for enqueue,2 for dequeue,3 for view,4 for exit");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter item to enqueue");
			scanf("%d",&item);
			enqueue(item);
		}
		else if (ch==2)
		{
			item=dequeue();
			if(item==-1)
			printf("underflow");
			else
			printf("%d",item);
		}
		else if (ch==3)
		view();
		if (ch==4) break;
	}
}
void enqueue(int item)
{
    int count;
	if(count==max)
	{
		printf("overflow");
	}
		else
		{
		    rear=(rear+1)%(max-1);
		    queue[rear]=item;
		    count=count++;
		}
}
 int dequeue()
 {
     int count;
 	if(count==0)
 	printf("underflow");
	 else
	 {
	    int item=queue[front];
	    front=(front+1)%(max-1);
	     return item;
	 }
 }
  void view()
  {
  	int i,count;
  	if(count==0)
  	{
  	printf("empty");
  	}
  	else
  	{
  	 int  i=front;
    while(i<=rear)
    {
  	printf("%d",queue[i]);
  	i=(i+1)%max;
  }
}
}
