#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
	string s;
	cin >> s;
	bool ok = false;
	for(int i =0 ; i <s.size();i++){
		if(s[i] != s[0]) {swap(s[i], s[0]); ok =true; break;}
	}    
	if(!ok){cout<< "NO" <<endl; return;} 
	cout << "Yes" << endl;
	cout << s << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}