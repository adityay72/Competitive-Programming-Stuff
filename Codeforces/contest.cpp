#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int e=max(3*a/10,a-a/250*c);
    int f=max(3*b/10,b-b/250*d);
    if(e>f) cout<<"Misha";
    else if(e<f) cout<<"Vasya";
    else cout<<"Tie";
   
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}