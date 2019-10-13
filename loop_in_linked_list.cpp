#include<iostream>

using namespace std;


struct LList
{
    int data;
    LList *next;
} *head;

void initialize ()
{
    head=NULL;
}


 LList* create_node ( int x )

  {
     LList *newnode;
     newnode= new (LList);

     newnode->data=x;
     newnode->next=NULL;

     return newnode;
  }

  void insertList(LList *head,int x ,int position)
  {
      LList *temp, *p, *q;
      int k;
      p=create_node( x);

      if(!p)
      {
          cout<<"memory error";
          return;
      }
      if(position==1)
      {
       if(head==NULL)
       {
          head=p;

       }

            else
                temp=head;
            head=p;
            p->next=temp;
      }

      else
          q=head;
        while(q!=NULL && k<position)
      {
          k++;
          temp=q;
          q=q->next;
      }

      if(k<=position)
      {
          cout<<"fewer nodes";

      }

      q->next=p;
      p->next=temp;


  }

  void show(LList *head)
  {
      LList *current;

      current=head;

      while(current!=NULL)
      {
          cout<<current->data;
          current=current->next;
      }

  }

  int main()
  {   int x,p;

      cout<<"enter data";
      cin>>x;
      cout<<"enter position";
      cin>>p;


      insertList(head,x,p);
      show(head);

      return 0;
  }
