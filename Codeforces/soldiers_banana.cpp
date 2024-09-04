#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
   int a,b,c,s=0;
   cin >> a >> b >> c;
   for(int i =1;i<=c;i++){
   	s+= i*a;
   }
   // cout << s;
   cout  << max(0,s-b);
   

}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}