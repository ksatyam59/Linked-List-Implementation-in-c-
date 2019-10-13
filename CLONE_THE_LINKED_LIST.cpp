#include<iostream>


using namespace std;

struct LNode
{
    int data;
    LNode *next;
};

void InsertBegin(LNode **head, int n)
{
    LNode *newnode=new LNode;
    LNode *temp;
    if(!newnode)
    {
        cout<<"Memory Error";
        return;
    }
    newnode->data=n;
    newnode->next=NULL;



        newnode->next=*head;
        *head=newnode;
}

LNode* CopyList(LNode *head)
{
    LNode *temp,*List,*tail;
    temp=head;
    while(temp)
    {   if(List==NULL)
        {
        List=new LNode;
        List->data=temp->data;
        List->next=NULL;
        tail=List;

        }
        else
        {
            tail->next=new LNode;
            tail=tail->next;
            tail->data=temp->data;
            tail->next=NULL;
        }
        temp=temp->next;
    }

    return List;
}

void ShowList(LNode *head)
{
    if(head==NULL)
    {
        cout<<"No Element to display";
    }

    LNode *temp;
    temp=head;
    while(temp)
    {
        cout<<temp->data;
        temp=temp->next;
    }
}


int main()
{
    LNode *head=NULL;

    InsertBegin(&head,8);
    InsertBegin(&head,2);
    InsertBegin(&head,4);
    InsertBegin(&head,6);
    ShowList(head);
    LNode *Copy=CopyList(head);
    ShowList(Copy);
    return 0;
}
