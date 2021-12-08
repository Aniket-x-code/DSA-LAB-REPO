#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
	struct node *lp;
	int data;
	struct node *rp;
} *snode;

void createDLL(int n);
void display();
struct node*deletex(struct node*snode,int x);
struct node*insert(struct node*snode,int x);
//void Adisplay();

int main()
{
   //	clrscr();
	int n,x;
	printf("How many nodes you want to insert in DLL:- ");
	scanf("%d", &n);
	createDLL(n);
	printf("The Created Doubly linked list is:-\n");
	display();
	
	
	deletex(snode,x);
     display();
     insert(snode,x);
       display();
   //	getch();
	return 0;
}

void createDLL(int n)
{
	struct node *q, *t;
	int num,i;
	snode = (struct node *)malloc(sizeof(struct node));
	if(snode == NULL)
	{
		printf("Memory cannot be allocated");
	}
	else
	{       printf("Give value for 1st node:- ");
		scanf("%d", &num);
		snode->data = num;
		snode->lp = NULL;
		snode->rp = NULL;
		t=snode;

		for(i=2;i<=n;i++)
		{
			q = (struct node *)malloc(sizeof(struct node));
			if(q==NULL)
			{
				printf("Memory cannot be allocated");
				break;
			}
			else
			{
				printf("Give value for %d node:-", i);
				scanf("%d", &num);
				q->data = num;
				q->lp = NULL;
				q->rp = NULL;

				q->lp = t;
				q->lp->rp = q;
				t=t->rp;
			}
		}
	}
}

void display()
{
	struct node *p;
	if(snode == NULL)
	{
		printf("The created Doubly Linked List is Empty");
	}
	else
	{
		p=snode;
		while(p != NULL)
		{
			printf(" <--> %d", p->data);
			p = p->rp;
		}
	}
}
struct node*deletex(struct node*snode,int x)
{
    struct node*p,*q;
   printf("\nEnter value that you want to delete:- ");
    scanf("%d",&x);
    if(snode == NULL)
    {
        printf("the link list is empty");
    }
    p=snode;
    while(p->data != x && p->rp!= NULL)
    {
        p=p->rp;
    }
    if(p->data == x)
    {
        p->lp->rp=p->rp;
        p->rp->lp=p->lp;
    }
    return(snode);
    
}
struct node*insert(struct node*snode,int x)
{
    struct node*p,*q,*r;
    int e;
    printf("\nenter the number before which the node to be inserted :");
    scanf("%d",&x);
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nenter the number to be inserted in the link list :");
    scanf("%d",&e);
    
    p->data=e;
    p->rp=NULL;
    p->lp=NULL;
    if(snode == NULL)
    {
        printf("the link list is empty");
    }
    q=snode;
    while(q->data!=x && q->rp!=NULL)
    {
        q=q->rp;
       
    }
    if(q->data==x)
    {
      p->lp=q->lp;
      p->rp=q;
      q->lp->rp=p;
      q->lp=p;
    }
    return(snode);
    
    
}

