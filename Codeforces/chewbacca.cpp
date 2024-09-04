#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	string s;
 	int x;
 	cin >> s;
 	x=s.size();

 	for(int i=0;i<x;i++){
 		if(i==0 && s[i]=='9') continue;
 		if((9-int(s[i]-'0'))<int(s[i]-'0')){
 			s[i]= char(9 - int(s[i] - '0') + int('0'));
 		}
 	}
 	rep(i,x) cout<< s[i];

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}