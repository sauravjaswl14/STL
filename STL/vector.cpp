#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout<<"vector size: "<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    printVec(v);
    printVec(v);
    // vector<int> v{2,3,4}; //vector<int> v(10); //vector<int> v(10,3);
    // v.push_back(20); //O(1)
    // printVec(v);
    // vector<int> v1=v; //O(n)
    // v1.push_back(30);
    // printVec(v);
    // printVec(v1);
   /*
   int n;
    cout<<"enter number of elements you want to enter in vector\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cout<<"enter element to be inserted in vector\n";
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    printVec(v);
   */ 
    
   // v.push_back(10);
   // printVec(v);
}