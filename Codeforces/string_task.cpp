#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	string s;
 	int i;
 	cin >> s;
 	for(int i=0;s[i] != '\0';i++){
 		s[i]=tolower(s[i]);
 		if(s[i]!='a'&& s[i]!='e'&& s[i]!='i'&& s[i]!='o'&&s[i]!='u'&&s[i]!='y'){
 		cout << '.'<< s[i];
 	}
 	}

 	

}