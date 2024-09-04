#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
	string s;
	bool flag=false;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='H'|| s[i]=='Q'|| s[i]=='9')
			flag =true;
		
	}
	if(flag)cout << "YES";
	else cout << "NO";

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}