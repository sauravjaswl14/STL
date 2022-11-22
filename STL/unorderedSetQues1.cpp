/*
Given N strings and Q queries. In each query you are given a string,
print yes if string is present else print no.
N<=10^6
|s|<=100
Q<=10^6
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    cout<<"enter number of strings to be inserted in set:"<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cout<<"enter no. of queries:"<<endl;
    cin>>q;

    while(q--)
    {
        string str;
        cout<<"enter string for query:"<<endl;
        cin>>str;
        if(s.find(str)==s.end())
        {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
}