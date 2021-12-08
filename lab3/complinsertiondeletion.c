#include<iostream>

using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int x)
{
   data=x;
   next=0; 
}
};
node* head=0;
node* head1=0;
node* head2=0;
int length()
{
    node* temp=head;
    int i=0;
    while(temp)
    {  i++;
        temp=temp->next;}
        return i;
}

void display(node* temp)
{ if(temp==0)
  return;
  cout<<temp->data<<" ";
  display(temp->next);
}

void insert(int x,int pos)
{
    node* New=new node(x);
    if(pos>length()+1)
    {cout<<"Invalid position\n";
    return;}
    else
    {if(pos==1&&head==0)
    {
        head=New;
    }
    else if(pos==1&&head!=0)
    {New->next=head;
    head=New;}
    else 
    {
        node* temp=head;
        int i=1;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
      
        New->next=temp->next;
        temp->next=New;
    }}
}
void delete_node(int pos)
{  if(pos>length())
  {
      cout<<"The position is incorrect\n";
      return;
  }
  else 
  {  node* temp;
  node* prev;
  int i=1;
      if(pos==1)
      { 
        temp=head;
        head=head->next;  
        return;
      }
      else
      {
        temp=head;
        while(i<pos)
        {prev=temp;
        temp=temp->next;
        i++;}
        prev->next=temp->next;
        delete temp;
      }
  }

}

void partition()
{

node* fast;
node* slow;
node* prev;
slow=fast=head;
while(fast!=0)
{
    if(fast->next==0)
    {
        break;
    }

    prev=slow;
    slow=slow->next;
    fast=fast->next->next;
}

head1=head;
if(fast==0)
{   head2=slow;
if(prev!=0)
prev->next=0;
}
else if(fast->next==0)
{head2=slow->next;
slow->next=0;}


}
node* merge_sort(node* first,node* mid,int flag)
{
  node* temp;
  node* H;
  if(flag==1)
  {if(first->data<mid->data)
  {
      temp=first;
      first=first->next;
      
  }
  else
  {
      temp=mid;
      mid=mid->next;
      
  }
  H=temp;
  while(first!=0&&mid!=0)
  {
      if(first->data<mid->data)
      {
         temp->next=first;
      first=first->next;
      temp=temp->next;
      }
      else
  {
      temp->next=mid;
      mid=mid->next;
      temp=temp->next;
  }
  }
}
else
{
    if(first->data>mid->data)
  {
      temp=first;
      first=first->next;
  
  }
  else
  {
      temp=mid;
      mid=mid->next;
      
  }
  H=temp;
  while(first!=0&&mid!=0)
  {
      if(first->data>mid->data)
      {
         temp->next=first;
      first=first->next;
      temp=temp->next;
      }
      else
  {
      temp->next=mid;
      mid=mid->next;
      temp=temp->next;
  }
  }


}
if(first==0)
temp->next=mid;
else
temp->next=first;
return H;


}
node* sort(node* temp,int flag)
{
   if(temp->next==0||temp==0)
   return temp;
   node* prev;
   node* fast;
   node* slow;
   node* mid;
   slow=fast=temp;
   while(fast!=0)
{
    if(fast->next==0)
    {
        break;
    }

    prev=slow;
    slow=slow->next;
    fast=fast->next->next;
}
if(fast==0)
{   mid=slow;
if(prev!=0)
prev->next=0;
}
else if(fast->next==0)
{mid=slow->next;
slow->next=0;}
temp=sort(temp,flag);
mid=sort(mid,flag);
temp=merge_sort(temp,mid,flag);   
return temp;



}

node* merge()
{     head=head1;
    while(head1->next!=0)
    {
        head1=head1->next;
    }
    head1->next=head2;
    return head;
}

int main()
{
    int x,pos,n;
do
{cout<<"What operation you want to perfrom\n1-Insert\n2-Delete\n3-Print the list\n0-Exit\n";
cin>>n;
switch(n)
{case 1:cout<<"Enter the value you want to insert and it's position\n";
cin>>x>>pos;
insert(x,pos);
break;
case 2:cout<<"Enter the position you want to delete\n";
cin>>pos;
delete_node(pos);
break;
case 3:display(head);
cout<<endl;
break;
case 4:partition();
display(head1);
cout<<endl;
display(head2);
cout<<endl;
head1=sort(head1,1);
head2=sort(head2,0);
head=merge();
display(head);
cout<<endl;
}
}
while(n);}
