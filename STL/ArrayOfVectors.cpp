#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int N; //size of array of vectors
    cin>>N;
    vector<int> v[N]; //array of vectors
    for(int i=0; i<N; i++)
    {
        int n;
        cout<<"enter size of vector: ";
        cin>>n;
        for(int j=0; j<n; j++)
        {
            int x;
            cout<<"enter element to be inserted in vector";
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0; i<N; i++)
    {
        printVec(v[i]);
    }
}