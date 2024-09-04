#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	string s1="qwertyuiop;";
 	string s2="asdfghjkl;";
 	string s3 = "zxcvbnm,./" ;

 	string d,t;
 	cin >> d;
 	if(d=="R"){
 		cin >> t;
 		for(int i=0;i<t.size();i++){
 			char c = t[i];
 			if(c == s1[0] || c == s2[0] || c == s3[0]) cout << c;
 			else if (c == s1[i]) cout << s1[i-1];
 			else if (c == s2[i]) cout << s2[i-1];
 			else if (c==s3[i]) cout << s3[i-1];

 		}
 	}
}