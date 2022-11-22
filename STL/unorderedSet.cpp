#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s)
{
    for(string value : s)
    {
        cout<<value<<endl;
    }
}

int main()
{
    unordered_set<string> s;
    s.insert("abc");
    s.insert("jkl"); //O(1)
    s.insert("efg");
    s.insert("mno");
    print(s);

    auto it = s.find("jkl"); //O(1)
    if(it!=s.end())
    {
        s.erase(it); //O(1)
    }
    print(s);

}