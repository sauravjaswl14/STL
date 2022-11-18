/*
Given N strings, print unique strings in lexiographical order
N <= 10^5
|s| <=100000
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    cout<<"enter number of strings you want to insert in set";
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"enter string:"<<endl;
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"strings in oreder are:"<<endl;
    for(string value : s)
    {
        cout<<value<<endl;
    }
}