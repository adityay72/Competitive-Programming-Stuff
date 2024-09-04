#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n; cin >> n;

    if(n%7==0){
    	n /=7;
    	cout << 2*n << " " << 2*n;
    	return;
    }
    int rem=n%7;
    if(rem >2){
    	if(rem==6){
    		n /=7;
    		cout<< 2*n+1 << " " << 2+2*n;
    	}else{


    	n /=7;
    	cout << 2*n << " " << 2+2*n;
    	}
    }
    else if (rem <=2){
    	n /=7;
    	cout << 2*n << " " << 2*n+rem; 
    }

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}