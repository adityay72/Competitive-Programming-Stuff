#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    set<int> zeros;
    int i = 0, j = n - 1;
    while (k > 0 && zeros.size() < n) {
        if (zeros.count(i) == 0) {
            a[i]--;
            if (a[i] == 0) zeros.insert(i);
            i = (i + 1) % n;
            k--;
        }
        if (k > 0 && zeros.count(j) == 0) {
            a[j]--;
            if (a[j] == 0) zeros.insert(j);
            j = (j - 1 + n) % n;
            k--;
        }
    }
    cout << zeros.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
