#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m;
    m[1] = "abc"; //key 1 corresponding to value "abc"
    m[3] = "def"; //key 3 corresponding to value "def"
    m[5] = "jkl";
    m[2] = "bcd";
    m.insert({4,"cdc"});
    map<int,string> :: iterator it;
    for(it=m.begin(); it!=m.end(); it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}