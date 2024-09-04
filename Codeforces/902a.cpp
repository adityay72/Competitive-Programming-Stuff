#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    ll x,k;
    cin >> x >> k;
    ll sum=0;

    for(ll i =x; ;i++){
        int n = i;
        sum =0;

        while(n>0){
            sum += n%10;
            n /=10;
        }

        if(sum % k==0){
            cout << i << endl;
            break;
        }
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