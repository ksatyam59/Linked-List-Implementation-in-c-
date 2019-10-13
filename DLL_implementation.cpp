#include<iostream>


using namespace std;


struct DLL
{
    int data;
    DLL *next;
    DLL *prev;
};


void InsertBegin(DLL **head, int x)
{
    DLL *newnode=new DLL;
    if(!newnode)
    {
        cout<<"Memory Error";
    }
    newnode->data=x;
    newnode->prev=NULL;


    newnode->next=*head;
    newnode->prev=NULL;

    if(*head)

       (*head)->prev=newnode;


    *head=newnode;
}


void show(DLL *head)
{
    DLL *temp;
    temp=head;
    if(temp==NULL)
    {
        cout<<"List is empty"<<endl;
    }

    while(temp->next!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }


}



int main()
{
    DLL *head=NULL;

    InsertBegin(&head,5);

    show(head);

    return 0;
}
