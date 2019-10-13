#include<iostream>


using namespace std;
// linked list struct declaration


struct Node
{
    int data;
    Node *next;
};

struct Node *head;

// function to create new node, it return new node of NODE type


 Node* createNode(int x)
{ struct Node *newnode;
   newnode=new Node;// dynamically allocating memory to the new node
     if(!newnode)
  {
      cout<<"memory error";
  }
  newnode->data=x;
  newnode->next=NULL;


    return newnode;
}
// function to insert values in the begining of the list


void InsertBegin( int x)
{
    Node *newnode;
    newnode=createNode(x);
    if(head==NULL)
    {
        head=newnode;
        head->next==NULL;
    }
    else
       newnode->next=head;
       head=newnode;
}


// insert at last


 void InsertLast( int x)
 {
    Node *newNode= new Node;
    Node *temp;
    temp=head;
    newNode= createNode(x);

    if(head==NULL)
    {
        head=newNode;
    }

    else
        while(temp!=NULL)
        {
            temp=temp->next;
        }

        temp=newNode;
 }

// function to show the element of the list

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
        cout<<temp->data;

        temp=temp->next;
    }
}

int main()
{
   Node *head=NULL;

   InsertBegin(5);
    InsertBegin(6);
    InsertBegin(7);
    InsertBegin(8);
    InsertLast(7);
  show(head);


  return 0;
}
