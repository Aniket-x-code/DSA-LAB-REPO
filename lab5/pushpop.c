#include <stdio.h>
#include<stdlib.h>
int stack[20],choice,n,top,x,i;
void push();
void pop();
void display();

int main()
{
   top=-1;
   printf("how many elements you want to insert in to this stack");
   scanf("%d",&n);
   printf("stack operations using array\n");
   printf("1)push\n2)pop\n3)display\n4)exit");
   do{
       printf("enter your choice");
       scanf("%d",&choice);
       switch(choice)
       {
           case 1:
           {
               push();
               break;
           }
           case 2:
           {
               pop();
               break;
           }
           case 3:
           {
               display();
               break;
           }
           case 4:
           {
               printf("exit");
               break;
           }
           default:
           {
               printf("enter the choice 1 to 4");
           }
         
       }
   }while(choice!=4);
}
void push()
{
    if(top==n-1)
    {
        printf("the stack is overflow\n");
    }
    else{
        printf("enter a value that you want to push in to stack");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top == -1)
    {
        printf(" the stack is underflow");
    }
    else{
        printf("the poped element is : %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("the elements of the stack are :\n");
        for(i=top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
        printf("enter your next choice\n");
    }
    else
    {
        printf("your stack is empty");
    }
}











