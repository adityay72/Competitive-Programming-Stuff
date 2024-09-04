#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int>ans;
    for(int i=n;i>m;i--){
        ans.push_back(i);
    }
    for(int i=1;i<=m;i++){
        ans.push_back(i);
    }
    for(auto &a:ans){
        cout << a << " " ;
    }
    cout << endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

