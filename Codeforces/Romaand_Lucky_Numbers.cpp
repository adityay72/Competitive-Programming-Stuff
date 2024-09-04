#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n,m;
 	cin >> n >> m;
 	int res=0;

 	while(n--){
 		int x,l=0;
 		cin >> x;
 		while(x){
 			if(x%10 == 4 || x%10 == 7)
 				l++;
 			x /=10;
 		}
 		if(l<=m) res++;

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