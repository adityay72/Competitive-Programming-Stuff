#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    string s; 
    cin >> s;
    int n = s.size();
    if(n>=3 && s.substr(0,2) == "10"){
        if(s[2] >='2' || (n >=4 && s[2]=='1')){
            cout << "YES" <<endl;
        }
    }
    cout << "NO" <<endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

