#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin >> n;
    vector<string>a(n);
    rep(i,n){
    	cin >> a[i];
    }
    string s;
    int ans=0;
    for(int i=0;i<a.size();i++){
    	for(int j=0;j<a.size();j++){
    		s = a[i] + a[j];
    		if(s.length()%2==0){
    			int p=s.length()/2;
    			int fh =0;
    			int sh=0;
    			for(int k=0;k<p;k++){
    				fh += s[k] - '0';
    			}
    			for(int k=p;k<s.length();k++){
    				sh += s[k]-'0';
    			}
    			if(fh == sh){
    				ans++;
    			}
    		}
    	}
    }
    cout << ans <<endl;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}