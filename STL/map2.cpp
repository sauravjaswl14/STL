#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<"size of map: "<<m.size()<<endl;
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main()
{
    map<int,string> m;
    m[1] = "abc"; //O(log(n)) where n is size of map
    m[3] = "ghi";
    m[2] = "def";
    m[5]; //O(log(n))
    print(m);
}