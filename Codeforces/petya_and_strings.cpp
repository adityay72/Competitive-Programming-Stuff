#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
	string s1;
	string s2;


	cin >> s1>>s2;
	

	for(int i=0;i<s1.size();i++){
		s1[i]= tolower(s1[i]);
		s2[i]= tolower(s2[i]);

	}
		if(s1<s2) cout << "-1";
		if(s1>s2) cout << "1";
		if(s1==s2) cout << "0";
	
 
 
}