#include<iostream>
#include<list>
#include<set>

using namespace std;
int main()
{
    list<int>L;
    set<int>S;
    set<int>:: iterator i;
    L.push_back(5);
    L.push_back(6);
    L.push_back(8);
    L.push_back(4);
    L.push_back(3);
    L.push_front(4);
    list<int>:: iterator it;

    for(it=L.begin(); it!=L.end();it++)

    {
        S.insert(*it);
    }
     L.clear();
    for(i=S.begin();i!=S.end();i++)
    {
        L.push_back(*i);
    }

    for(it=L.begin(); it!=L.end();it++)

    {
        cout<<*it;
    }

    return 0;
}
