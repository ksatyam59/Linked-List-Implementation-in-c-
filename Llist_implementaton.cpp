#include<iostream>

using namespace std;


struct Node

{
    int data;
    Node *next;
};

Node *head=NULL;

// insert in begining of the list
void InsertBegin(Node **head, int n)
{
    Node *newnode=new Node;
    if(!newnode)
    {
        cout<<"Memory Error";
    }
    newnode->data=n;
    newnode->next=NULL;

    if(*head==NULL)
    {
        *head=newnode;
    }
    else
        newnode->next=*head;
        *head=newnode;

}

void InsertMiddle(Node **head, int n, int pos)
{   int k=1;
    Node *temp, *p;
    Node *newnode=new Node;
    if(!newnode)
    {
        cout<<"Memory Error";
    }

    newnode->data=n;
    newnode->next=NULL;
       temp=*head;
     while(k<pos)
     {
       p=temp;
       temp=temp->next;
         k++;
     }
    p=newnode;
    newnode->next=temp;


}

void InsertLast(Node **head, int n)
{   Node *temp;
    Node *newnode=new Node;
    if(!newnode)
    {
        cout<<"Memory error";
    }
    newnode->data=n;
    newnode->next=NULL;

    temp=*head;
  //  if(temp==NULL)
   // {
   //     *head=newnode;
   // }

    //  else
            while(temp!=NULL)
        {
            temp=temp->next;
        }

        temp=newnode;
        newnode->next=NULL;

}


// print the element of the linked list
void show(Node *head)

{
  Node *temp;
  temp=head;

  if(temp==NULL)
  {
      cout<<"List is empty"<<endl;
  }

  while(temp!=NULL)
  {

      cout<<temp->data<<" ";
      temp=temp->next;
  }
}


int main()
{
    Node *head=NULL;


    InsertBegin(&head,5);
    InsertBegin(&head,6);
    InsertBegin(&head,7);
    InsertBegin(&head,8);
    InsertMiddle(&head,3,2);
    InsertLast(&head,3);
    show(head);
    return 0;
}



