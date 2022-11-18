#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(string value : s)
    {
        cout<<value<<endl;
    }

    for(auto it=s.begin(); it!=s.end(); ++it)
    {
        cout<<(*it)<<endl;
    }
}

int main()
{
    set<string> s;
    s.insert("abc");  //O(log(n));
    s.insert("zsdf");
    s.insert("bcd");

    print(s);

    auto it = s.find("zsdf"); //O(log(n));
    if(it!=s.end())
    {
        cout<<(*it);
    }

  /*
     auto it = s.find("def");
    if(it!=s.end())
    {
        s.erase(it);
    }
  */ 
}