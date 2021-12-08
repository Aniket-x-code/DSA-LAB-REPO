#include<stdio.h>

#include<conio.h>

#include<stdlib.h>



struct node

{

int data;

struct node *next;

} *snode;



void createlist(int n); // Function Prototype

void display(); // Function Prototype



void main()

{

int n;

printf("Enter how many nodes you wants to create in the linked list:-\n");

scanf("%d", &n);

createlist(n); // Function calling

printf("The Created List is:-\n");

display(); // Function calling

getch();

}



void createlist(int n)

{

struct node *q, *t;

int num,i;

snode = (struct node *)malloc(sizeof(struct node));

if(snode == NULL)

{

printf("Memort cannot be allocated");

}

else

{

printf("Give the input for 1st Node");

scanf("%d", &num);

snode -> data = num;

snode -> next = NULL;

t = snode;

for(i=2;i<=n;i++)

{

q = (struct node *)malloc(sizeof(struct node));

if(q == NULL)

{

printf("Memort cannot be allocated");

}

else

{

printf("Give the input for %d node", i);

scanf("%d", &num);

q -> data = num;

q -> next = NULL;

t -> next = q;



t = t -> next;

}

}

}

}

void display(){struct node *p;
if(snode == NULL){printf("The created linked list is empty");
    
}else
{p = snode;while(p != NULL){printf("%d ->", p -> data);p = p-> next;}}}

