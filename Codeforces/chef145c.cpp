#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    bool flag = true;
    int cnt =0;
    for(int i=0;i<n;i++){
        if(flag){
            if(a[i] > k){
                cnt++;
                flag = false;
            }  
        }
        else {
            if(a[i] <= k){
                cnt++;
                flag = true;
            }
        }
    }
    cout << cnt << endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

