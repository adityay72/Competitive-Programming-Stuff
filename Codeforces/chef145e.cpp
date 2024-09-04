#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007
const ll MOD = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    ll ans=0;
    for(int i=n-1;i<=0;i--){
        int val = (1LL * i * pow(2,i)%MOD * (n-i)%MOD * (n-1)%MOD) %MOD;
        ans = (ans+val)%MOD;
    }
    cout <<ans <<endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

