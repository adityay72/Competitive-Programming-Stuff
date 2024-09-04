#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n,k;
 	cin >> n >> k;
 	string s; cin >> s;
 	int g=s.find('G'), p=s.find('T');
 	if(g>p) swap(g,p);
 	while(g<p){
 		if(s[g+k]=='#'){
 			cout << "NO";
 			return;
 		}
 		g +=k;

 	}
 	cout <<(g==p? "YES\n":"NO\n");

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}