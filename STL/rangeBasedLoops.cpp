#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<pair<int,int> > v_p = {{1,2},{3,4},{4,5},{6,7}};
	for(pair<int,int> &pr : v_p)
	{
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}