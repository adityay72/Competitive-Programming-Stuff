#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    vector<int>a(12);
    int k; cin >> k;
    for(int i=0;i<12;i++){
    	cin >> a[i];
    }
    sort(a.begin(),a.end(),greater<int>());
    int g=0,m=0;
    for(int i=0;i<12;i++){
    	if(g >= k) break;
    	g +=a[i];
    	m++;
    }
    cout << (g<k ? -1 : m);

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}