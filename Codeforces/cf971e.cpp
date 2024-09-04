#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(ll n, ll a, ll d) {
    return n * (2 * a + (n - 1) * d) / 2;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll lo = k;
    ll hi = k + n - 1;

    ll l = k;
    ll r = k + n - 1;
    ll p = 0;

    while (l <= r) {
        ll m = (l + r) / 2;
        ll s1 = sum(m - lo + 1, lo, 1);
        ll s2 = sum(hi - m, m + 1, 1);

        if (s1 <= s2) {
            p = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    ll min_diff = LLONG_MAX;
    ll res = p;

    for (ll i = max(lo, p - 10); i <= min(hi, p + 10); i++) {
        ll s1 = sum(i - lo + 1, lo, 1);
        ll s2 = sum(hi - i, i + 1, 1);
        ll diff = abs(s1 - s2);

        if (diff < min_diff) {
            min_diff = diff;
            res = i;
        }
    }

    cout << min_diff << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

