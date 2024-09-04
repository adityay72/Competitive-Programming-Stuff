#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n,m,h;
    cin >> n >> m >> h;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    vector<int>b(m);
    rep(i,m) cin >> b[i];
    sort(a.begin(),a.end(),greater<int>());
    sort(b.begin(),b.end(),greater<int>());
    ll sum=0;
    for(int i=0;i<min(n,m);i++){
        sum +=min(1ll*a[i],1ll*b[i]*h);
    }
    cout << sum << endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

