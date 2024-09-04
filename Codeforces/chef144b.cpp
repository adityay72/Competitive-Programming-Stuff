#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
 	ll x,y,z;   
 	int res =0;
 	cin >> x >> y >> z;
 	ll k = x*y;
	if(k > z){
		while(k>z){
			k -= y;
			res++;
		}
	}	
	cout << res << endl;

}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
