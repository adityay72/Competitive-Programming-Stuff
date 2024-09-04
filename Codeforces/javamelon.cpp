#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    set<int>cnt;
    cin >> n;
    string s;
    cin >> s;  
    for(int i=0;i<s.length()-1;i++){
    while(s[i]=='A' && s[i+1]=='B'){
        cnt.insert(i);
        swap(s[i],s[i+1]);
        i=0;
        
        }

    }

    cout << cnt.size()<<endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}