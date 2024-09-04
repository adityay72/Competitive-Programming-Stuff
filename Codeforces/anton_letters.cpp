#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt=0;
int main()
{	
	string s;
	ll res=0;
	set<char>z;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i])){
			z.insert(s[i]);
		}
	}
	cout << z.size();
}