#include<iostream>
#include<list>

using namespace std;


int main()
{
    list <int> A;
    for(int i=0;i<10;i++)
    {
        A.push_back(i);
    }

    list<int>::iterator it=A.begin();
    list<int>::iterator it2=A.begin();
     for(it=A.begin();it!=A.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


    advance(it,2);
    advance(it2,7);

    A.erase(it,it2);

    for(it=A.begin();it!=A.end();it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}
