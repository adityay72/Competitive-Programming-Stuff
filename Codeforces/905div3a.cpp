#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int ans = 0;
    int temp = 1; 

    for(int i = 0; i < s.size(); i++) {
        int d = s[i] - '0';
        int diff = abs(temp - d);
        ans += min(diff, 10 - diff);
        temp = d;
    }

    cout << ans + s.size() << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
