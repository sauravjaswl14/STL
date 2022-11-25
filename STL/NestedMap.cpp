//Map of set
//map<int,set<string>>
#include<bits/stdc++.h>
using namespace std;

void show(map<int,set<string> > &mapOfset)
{
    for(auto it = mapOfset.begin(); it!=mapOfset.end(); it++)
    {
        //key is a integer
        cout<<it->first<<"=>";

        //value is a set of strings
        set<string> st = it->second;

        for(auto it = st.begin(); it!=st.end(); it++)
        {
            cout<<(*it)<<' ';
        }
        cout<<endl;
    }
}

int main()
{
    //Declaring a map whose key is of integer datatype and value is
    //a set of strings
    map<int,set<string> > mapOfset;
    //inserting values in the set mapped with key 1
    mapOfset[1].insert("Geeks");
    mapOfset[1].insert("for");
    //set stores unique/distinct elements only
    mapOfset[1].insert("Geeks");

    //inserting values in the set mapped with key 2
    mapOfset[2].insert("is");
    mapOfset[2].insert("a");

    //inserting values in set mapped with key 3
    mapOfset[3].insert("great");
    mapOfset[3].insert("learning");

    //inserting values in set mapped with key 4
    mapOfset[4].insert("platform");
    show(mapOfset);

}
