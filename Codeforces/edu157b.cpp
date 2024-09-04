#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    int s;
    cin >> n;
    vector<pair<int,int>>a(2*n);
    for(int i=0;i<2*n;i++){
    	cin >> a[i].first >> a[i].second;
    	if(a[i].first > a[i].second){
    		swap(a[i].first , a[i].second);
    	}

    }
    sort(a.begin(),a.end());

    ll ans = a[n-1].first - a[0].first + a[2*n-1].second - a[n].second;
    for(int i=0;i<n;i++) ans += a[i+n-1].second - a[i].first;
    	cout << ans << endl;
    for(int i=0;i<n;i++) cout << a[i].first << a[i+n].second <<endl; 
    
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}