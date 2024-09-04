#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    s += 'W';
    vector<int> ans;
    int cur = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'B')
            cur++;
        else
        {
            if(cur > 0)
                ans.push_back(cur);
            cur = 0;
        }
    cout << ans.size() << endl;
    for (auto i : ans)
        cout << i << " ";
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}