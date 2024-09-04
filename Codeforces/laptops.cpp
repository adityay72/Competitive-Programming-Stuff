#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    bool flag = false;
 	int n; cin >> n;
    vector<vector<int>>a(n,vector<int>(n));
    rep(i,n) rep(j,n) {
        cin >> a[i][j];
    }
    rep(i,n) rep(j,n){
        if(a[i][j] < a[i+1][j] && a[i][j] < a[i][j+1] ){
            flag = true;
            return;
        }  
    }
    if(flag)cout << " Happy Alex";
    else cout << " Poor Alex";
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {

        solve();
    }
}