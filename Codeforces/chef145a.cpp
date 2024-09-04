#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    ll a,b,c,x;
    cin >> a >>b >> c >> x;
    if(a*b*c > x*x*x) cout << "Cuboid"<<endl;
    else if (a*b*c < x* x* x) cout << "Cube" <<endl;
    else cout << "Equal" <<endl;

}

int main() {
fastio();
int t = 1;
//cin >> t;
while (t--) {
    solve();
     }
} 

