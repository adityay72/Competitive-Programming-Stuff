#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    	int n ;
    	cin >> n;
    	vector<int>a(n-1);
    	for(int i=0;i<n-1;i++){
    		cin >> a[i];
    	}

    	vector<int>b(n,0);
    	
    	for(int i=0;i<n-1;i++){
    		b[i+1] = a[i] ^ b[i];
    	}
    	b[0]=a[0];

    	vector<bool>vis(n,false);
    	for(int i=0;i<n;i++){
    		if(b[i]<n) vis[b[i]] = true;
    	}
    	int m=0;
    	for(int i=0;i<n;i++){
    		m^=i;
    	}

    	int xorall=0;
    	for(int i=0;i<n;i++){
    		xorall ^= b[i];
    	}
    	m ^=xorall;
    	b[n-1] = m;


    	for(int i=0;i<n;i++){
    		cout << b[i] << " ";

    	}
    	cout << "\n";

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}