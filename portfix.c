#include<stdio.h>
#define max 100
int stack[max];
int top=-1;
char expr[100]="235*+";
int isoperator(char);
int evaluate(int a,int b,char opr);
void push(int);
int pop();
int main()
{
	int a,b,r;
	int i=0;
	while(expr[i]!='\0')
	{
		if(!isoperator(expr[i]))
		{
			push(expr[i]-48);
			
		}
		else{
			a=pop();
			b=pop();
			r= evaluate(a,b,expr[i]);
			push(r);
		}i++;
	}
	printf("result=%d",pop());
}
int isoperator(char x)
{
	if (x=='+'|| x== '*'|| x=='-')
	 return 1;
	 else 
	 return 0;
}
 int evaluate(int a,int b,char opr)
 {
 	if (opr=='+')
 	return b+a;
 	else if (opr== '*')
 	return b*a;
 	else if (opr=='-')
 	return b-a;
 }
 void push (int x)
 {
 	if (top>max)
 	{
 		printf("overflow");
 	}
 	else
 	{
 		stack[++top]=x;
 	}
 }
 int pop()
 {
 	if (top<0)
 	{
 		printf("underflow");
 	}
 	else {
 		return stack[top--];
 	}
 }
