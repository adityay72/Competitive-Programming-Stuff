#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	   int n,k,r,res=0;
 	   cin >> n >> k;
 	   vector<int>a(n);
 	   r=(5-k);
 	   rep(i,n){
 	   	cin >> a[i];
 	   	if(r>=a[i])res++;
 	   }
 	    res = res/3;
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