#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    map<int,int>mp;
    rep(i,n){
        cin >> a[i];
        if(a[i]!=0){
            mp[a[i]]++;
        }
    }
    if(mp.size() == 1 || mp.size()==0) cout <<"YES" <<endl;
    else cout << "NO" <<endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

