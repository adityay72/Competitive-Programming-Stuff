#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
 	int a,b,c,d;
 	cin >> a >> b >> c >> d;
 	string s;
 	for(int i=1; i <=12;i++){
 		if( i == a || i == b) {s+= "a";}
 		if( i == c || i == d) {s+= "b";}
 	} 
 	cout << (s == "abab" || s == "baba"? "YES\n" : "NO\n");
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}