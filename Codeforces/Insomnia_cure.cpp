#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=1;i<=n;i++)

void solve(){
 	int k,l,m,n,d,res=0;
 	cin >> k >> l >> m >> n >> d;
 	rep(i,d){
 		if(i%k==0 || i%l==0||i%m==0||i%m==0||i%n==0)res++;
 	}
 	cout << res;   
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}