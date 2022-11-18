#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,string> p;
    p = make_pair(2,"abc"); // p = {2,"abc"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,string> &p1 = p;
    p1.first=3;
    p1.second="abcd";
    cout<<p.first<<" "<<p.second<<endl;
}