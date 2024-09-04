#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n; cin >> n;
    vector<vector<int>>a(n,vector<int>(3));
    vector<int>sum(3,0);
    rep(i,n) rep(j,3) {
    	cin >> a[i][j];
    	sum[j] += a[i][j];
	}
	if(sum[0] ==0 && sum[1]==0 && sum[2]==0) cout << "YES";
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