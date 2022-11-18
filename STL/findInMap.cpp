#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m;
    m[1] = "abc";
    m[3] = "fgh";
    m[4] = "sdf";

    auto it = m.find(3); //returns iterator //O(logn)
    if(it==m.end())
    {
        cout<<"NO value";
    }
    else{
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}