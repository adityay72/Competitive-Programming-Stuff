#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
   	string s;
   	ll z,w;
   	cin >> s;
   	z=s.size();
 	for(int i=0;i<z;i++) if(s[i]=='4' || s[i]== '7' ) w++;
 	if(w %10== 4 || w%10 == 7) cout << "YES\n";
 	else cout << "NO\n";  	


}


int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}