#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vector<int>x(n);
    x[0] = (s[0]=='1');
    for(int i =1;i<n;i++){
    	x[i] = x[i-1] + s[i]=='1';
    }
    vector<int>ans(n);
    for(int i =1;i<=n;i++){
    	if(i+x[i-1]>x[i]){
    		ans[i-1]= -1;
    	}
    	else {
    		ans[i-1] = i -(x[i] - x[i-1]);
    	}
    }
    for(int i=0;i<n;i++){
    	cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}