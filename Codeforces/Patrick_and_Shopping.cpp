#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	  int d1,d2,d3,a,b,c,e;
 	  cin >> d1 >> d2 >> d3;
 	  a=d1+d3+d2;
 	  c=(2*d2)+(2*d3);
 	  b=(2*d1)+(2*d2);
 	  e=(2*d1)+(2*d3);
 	  cout << min(min(a,e),min(b,c));


}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}