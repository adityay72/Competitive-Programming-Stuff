#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin >> n;
    char a[n][n];
    cout << ((n*n)+1)/2 << endl;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		if((i+j)%2==0){
    			cout << 'C';
    		}
    		else cout << '.';
    	}
    	cout << endl;

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