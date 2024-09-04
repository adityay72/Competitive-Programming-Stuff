#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
	int n,a,b;
	int cost =0;
	cin >> n >> a >> b;
	if(2*a <= b) cost = n*a;
	else {
		cost = (n/2)*b;
		if(n%2 !=0) cost += a;
	}
	
	cout << cost <<endl;

    
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}