#include<iostream>


using namespace std;

struct LList
{
    int data;
    LList *next;
};




void insertBegin(LList **head, int n)
{     LList *newnode=new (LList);
      LList  *p,*q;

      if(!newnode)
      {
          cout<<"memory error"<<endl;
      }

      newnode->data=n;
      newnode->next=NULL;
// insert begining
      p=*head;
      *head=newnode;
      newnode->next=p;

}

  void insertMiddle(LList **head, int n,int position)
  {
      LList *newnode, *p, *q;
      newnode=new(LList);
      int k=1;
      if(!newnode)
      {
          cout<<"memory error"<<endl;
      }
      newnode->data=n;
      newnode->next=NULL;

      //inserting in middle
      p=*head;
      while(k<position)
      {
          k++;

          p=p->next;
      }
      q=p;
      p=newnode;
      newnode->next=q;


  }


 void insertLast(LList **head, int n)
  {
      LList *newnode, *q;
      newnode=new(LList);
      int k=1;
      if(!newnode)
      {
          cout<<"memory error"<<endl;
      }
      newnode->data=n;
      newnode->next=NULL;

      //inserting in middle
     LList *p=*head;
      while(p->next!=NULL)
      {


          p=p->next;
      }
      p->next=newnode;
      newnode->next=NULL;


  }
void showL(LList *head)
{
    LList *current;
     current=head;
     if(current==NULL)
     {
         cout<<"No Element in the List";
     }
     else
     while(current!=NULL)
     {
         cout<<" "<<current->data;

         current=current->next;
     }
     return ;
}

int main()
{   LList *h=NULL;




    insertBegin(&h,9);
    insertBegin(&h,5);
    insertBegin(&h,9);
    insertBegin(&h,4);
    insertBegin(&h,2);
    insertLast(&h,7);
    insertMiddle(&h,7,4);
    showL(h);
    return 0;
}
