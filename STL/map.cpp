#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
	cout<<"size of map: "<<m.size()<<endl;
	/*map<int,string> :: iterator it;
	for(it=m.begin(); it!=m.end(); ++it)
	{
		cout<<(*it).first<<" "<<(*it).second<<endl;
	}*/
	for(auto &pr : m)
	{
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}

int main()
{
	map<int,string> m;
	m[1] = "abc";
	m[3] = "ghi";
	m[2] = "def";
	m.insert({4,"jkl"});
	auto it = m.find(3);
	if(it!=m.end())
	{
		//cout<<it->first<<" "<<it->second<<endl;
		m.erase(it);
	}
	print(m);
}