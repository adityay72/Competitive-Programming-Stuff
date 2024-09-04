#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i=0;i<n-1;i++){
        cin >> a[i];
    }
    map<pair<int, int>, int> mp;
    mp[{0, 0}] = 0; 
    for (string& s : a) {
        int len = s.size();
        for (int mask = 0; mask < (1 << len); ++mask) {
            int sum1 = 0, sum2 = 0;
            for (int i = 0; i < len; ++i) {
                if (mask & (1 << i)) {
                    sum1 += s[i] - '0';
                } else {
                    sum2 += s[i] - '0';
                }
            }
            if (sum1 == sum2) {
                ++mp[{len, sum1}];
            }
        }
        
    }
    ll ans = 0;
    for (string& s : a) {
        int len = s.size(), sum = 0;
        for (char c : s) {
            sum += c - '0';
        }
        ans += mp[{len, sum}];
    }
    cout << ans << endl;
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
