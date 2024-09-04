#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

int calculateTime(const string& s) {
    int t = 2; 
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            t += 1;
        } else {
            t += 2; 
        }
    }
    return t;
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    string ans = "";
    int max = -1;
    for (int i = 0; i <= s.length(); i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            string newpass = s.substr(0, i) + c + s.substr(i);
            int newt = calculateTime(newpass);
            if (newt > max) {
                max = newt;
                ans = newpass;
            }
        }
    }

        cout << ans << endl; 

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

