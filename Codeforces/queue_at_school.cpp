#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n,t;
 	cin >> n>>t;
 	string s;
 	cin >> s;
 	for(int j=0;j<t;j++){
 		for(int i=0;i<s.size();i++){
 		if(s[i]=='B' && s[i+1]== 'G'){
 			swap(s[i],s[i+1]);
 			i++;
 		}
 		
 		}
 	}
 	cout << s<<endl;


}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}