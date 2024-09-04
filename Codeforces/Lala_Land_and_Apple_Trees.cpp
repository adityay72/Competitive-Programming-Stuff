#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int a ,b,sum=0,res=0,c ;
 	cin >> a >> b;
 	if(a>0 ){
 		sum += b;
 	}
 	else if (a < 0){
 		res += b;
 	}  
 	cout << sum  << res ;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}