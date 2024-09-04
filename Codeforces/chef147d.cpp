#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int mod = 1e9+7;
const int inf = 1e18;

bool isPrime(int num) { 
    if (num <= 1) return false; 
    if (num == 2 || num == 3) return true; 
    if (num % 2 == 0 || num % 3 == 0) return false; 
    for (int i = 5; i * i <= num; i += 6) { 
        if (num % i == 0 || num % (i + 2) == 0) return false; 
    } 
    return true; 
}

void solve(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
    
    map<int, vector<int>> mp1, mp2;
    int ans1 = -1, ans2 = -1;
    int odd, even;
    
    for(int i = 0; i < n; i++) {
        if(vec[i] % 2 == 1) {
            mp1[vec[i]].push_back(i);
            odd = vec[i];
        } else {
            mp2[vec[i]].push_back(i);
            even = vec[i];
        }
    }
    
    if(mp2.size() > 1) {
        for(auto it = mp2.begin(); it != mp2.end(); it++) {
            if(ans1 == -1) ans1 = it->second[0];
            else if(ans2 == -1) ans2 = it->second[0];
            else break;
        }
        cout << ans1 + 1 << " " << ans2 + 1 << endl;
    } 
    else if(mp1.size() > 1) {
        for(auto it = mp1.begin(); it != mp1.end(); it++) {
            if(ans1 == -1) ans1 = it->second[0];
            else if(ans2 == -1) ans2 = it->second[0];
            else break;
        }
        cout << ans1 + 1 << " " << ans2 + 1 << endl;
    } 
    else {
        for(auto it = mp2.begin(); it != mp2.end(); it++) {
            if(it->second.size() > 1) {
                ans1 = it->second[0];
                ans2 = it->second[1];
                break;
            } else {
                ans1 = it->second[0];
            }
        }
        
        if(ans2 != -1) {
            cout << ans1 + 1 << " " << ans2 + 1 << endl;
        } else {
            vector<int> temp = mp1[odd];
            if(temp.size() > 1 && odd != 1) {
                cout << temp[0] + 1 << " " << temp[1] + 1 << endl;
            } else if(ans1 != -1 && !isPrime(vec[ans1] + odd)) {
                cout << ans1 + 1 << " " << temp[0] + 1 << endl;
            } else {
                cout << "-1" << endl;
            }
        }
    }
}

int32_t main() {
    fastio();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}

