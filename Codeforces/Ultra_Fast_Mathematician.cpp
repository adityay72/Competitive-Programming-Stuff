#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	string s1,s2;
 	cin >> s1;
 	cin >> s2;

 	for(int i=0;i<s1.size();i++){
 		if(s1[i]!=s2[i]) cout << "1";
 		else cout << "0";
 	}


 	


}