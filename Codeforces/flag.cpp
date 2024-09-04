#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n,m;
 	cin >> n >> m;
 	bool flag =true;
 	vector<vector<char>>a(n,vector<char>(m));
 	rep(i,n) rep(j,m){
 		cin >> a[i][j];
 	}
 	rep(i,n) {
 		rep(j,m-1){
 		if(a[i][j]!=a[i][j+1] ){
 			flag=false;
 			break;
 			}

 		}
 		if(!flag)break;
 		if(i<n-1 && a[i][0]==a[i+1][0]){
 			flag = false;
 			break;
 		}
 	}

 	if(flag)cout << "YES";
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