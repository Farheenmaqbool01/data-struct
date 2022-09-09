#include<stdio.h>
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
	if(rear<max)
	{
		queue[++rear]=item;
	}
		else
		printf("overflow");
}
 int dequeue()
 {
 	if (front<rear)
	 return queue[front++];
	 else
	 return -1;
 }
  void view()
  {
  	int i;
  	if(front>rear)
  	printf("empty");
  	else
  	{
  	for(i=front;i<=rear;i++)
  	printf("%d",queue[i]);
  }
}

