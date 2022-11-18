#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"vector size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int N;
    cout<<"enter size of Vector";
    cin>>N;
    vector<vector<int> > v;
    for(int i=0; i<N ; i++)
    {
        int n;
        cout<<"enter size of vector to be stored in vector";
        cin>>n;
        vector<int> temp;
        for(int i=0; i<n; i++)
        {
            int x;
            cout<<"enter element to be inserted in a vector";
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int> ());
    for(int i=0; i<v.size(); i++)
    {
        printVec(v[i]);
    }
    
}