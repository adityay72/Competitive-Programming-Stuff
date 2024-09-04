#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s;

    int l = count(s.begin(), s.end(), 'L');
    int r = l;
    vector<int> ans(n);
    int num = 1;

    for (int k = n - 1; k >= 0; k--) {
        if (s[k] == 'L') {
            num = num * a[--l] % m;
        } else {
            num = num * a[r++] % m;
        }
        ans[k] = num;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
