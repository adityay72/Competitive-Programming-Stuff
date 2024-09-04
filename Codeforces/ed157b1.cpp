#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
   
    int n;
    cin >> n;
    
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<pair<int, int>> points;
    for (int i = 0; i < n; i++) {
        points.push_back({a[i], a[2 * n - i - 1]});
    }

    int ans=0;
    for (int i = 1; i < n; i++) {
        ans += (abs(points[i].first - points[i - 1].first)) + abs((points[i].second - points[i - 1].second));
    }

    cout << ans << endl;

    for (const auto& point : points) {
        cout << point.first << " " << point.second << endl;
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