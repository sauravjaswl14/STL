#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s)
{
    for(string value:s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    multiset<string> s;
    s.insert("abc");
    s.insert("def");
    s.insert("abc");
    s.insert("def");

    auto it = s.find("abc");  //finds the iterator of the first value
    if(it!=s.end())
    {
        s.erase(it);    //deletes the value of that particular iterator only
    }

    s.erase("def"); //Deletes all the values includeing duplicates

    print(s);
}