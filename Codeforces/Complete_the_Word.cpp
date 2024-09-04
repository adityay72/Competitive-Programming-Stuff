#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
 string s;
 cin >>s;

 if(s.size()<26) cout << "-1" <<endl;

 set<char>a(s.begin(),s.end());

 if(a.size)


int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}