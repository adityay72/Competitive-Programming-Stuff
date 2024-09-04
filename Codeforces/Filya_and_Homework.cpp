#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n;
 	cin >> n;
 	ll a[n];
 	set<int>s;
 	rep(i,n) {cin >> a[i]; s.insert(a[i]);}
 	if(s.size()>3) {cout << "NO";return;}
 	else if(s.size()<3) {cout << "YES";return;}
 	else {
 		int b[3];
 		int k=0;
 		for(auto t:s){
 			b[k]=t;
 			k++;
 		}
 		if(b[0]+b[2]==2*b[1]) cout << "YES";
 		else cout << "NO";
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