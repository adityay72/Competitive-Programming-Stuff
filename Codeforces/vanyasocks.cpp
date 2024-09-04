#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=1;i<=n;i++)

void solve(){
 	int n,m;
 	cin >> n >> m;
 	rep(i,n){
 		if(i%m==0)n++;

 	}   
 	cout << n;
}

int main() {
    fastio(); 
    int t = 1;
    // cin >> t;
    while (t--) { 
        solve();
    }
}