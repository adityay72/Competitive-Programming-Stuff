#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n,m;
 	int res=0;
 	cin >> n >> m;
 	if(min(n,m)%2==1)cout << "Akshat";
 	else cout << "Malvika";   
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}