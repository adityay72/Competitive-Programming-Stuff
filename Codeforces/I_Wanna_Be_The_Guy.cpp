#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
	int n,a,b;
	cin >> n ;
	set<int>p;
	cin >> a;
	rep(i,a){
		int l;
		cin >> l;
		p.insert(l);
	}
	cin >> b;
	rep(j,b){
		int l;
		cin >> l;
		p.insert(l);
	}
	if(p.size()<n)cout << "Oh, my keyboard!";
	else cout << "I become the guy.";
    
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}