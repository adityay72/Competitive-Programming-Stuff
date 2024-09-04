#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n,q; cin >> n >> q;
    string a, b;
    cin >> a >> b;
    while(q--){
        int l,r;
        cin >> l >> r;
        l--;
        r--;
        vector<int>x(26,0);
        vector<int>y(26,0);
        for(int i=0;i<r;i++){
            x[a[i]-'a']++;
            y[b[i]-'a']++;
        }
        int res=0;
        rep(i,26) res += abs(x[i]-y[i]);
        cout << res/2 <<endl;
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

