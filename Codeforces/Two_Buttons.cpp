#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int a,b,ans=0;
    cin >> b >> a;
    while(a !=b){
    	if(a < b){
    		a++;
    		ans++;
    		continue;
    	}
    	if(a %2) a++; else a/=2;
    	ans++;
    }
    cout << ans << endl;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}