#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n; cin >> n ;
    string s;
    cin >> s;
    int awin=0,bwin=0;
    for(int i=0;i<s.size();i++){
    	if(s[i]=='A') awin++;
    	else if(s[i]=='B') bwin++; 
    }
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}