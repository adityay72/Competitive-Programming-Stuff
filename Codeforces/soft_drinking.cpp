#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
int n,k,l,c,d,p,nl,np,x,y,z;
cin >>n>>k>>l>>c>>d>>p>>nl>>np; 
x= (k*l)/nl;
y= c*d;
z= p/np;
int ans;
ans = min(x,min(y,z));
cout << ans/n;


}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}