#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    int ncnt=0;
    ll sum =0;
    int minval = 1e6;
    for(int i=0;i<n;i++){
        if(a[i] <0) ncnt++;
        sum += abs(a[i]);
        minval = min(minval,abs(a[i]));
    }
    if(ncnt %2==0) cout << sum << endl;
    else cout << sum - 2 * minval << endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

