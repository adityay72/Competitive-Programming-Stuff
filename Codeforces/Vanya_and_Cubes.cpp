#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n;
 	cin >> n;
 	int i=1;
 	while(n>=i*(i+1)/2){
 		n-=i*(i+1)/2;
 		i++;
 	}
 	cout << i-1;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}