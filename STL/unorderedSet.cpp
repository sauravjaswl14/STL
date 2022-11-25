#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s)
{
	for(auto &value:s)
	{
		cout<<value<<endl;
	}
}

int main()
{
	unordered_set<string> s;
	s.insert("abc");
	s.insert("def");
	s.insert("jkl");
	s.insert("bcd");
	print(s);

}