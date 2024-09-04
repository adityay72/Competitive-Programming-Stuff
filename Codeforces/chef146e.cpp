#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n; cin >>n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i];
    }
    int lh =0;
    int rh =0;
    int res =0;
    for(int i=0;i<n;i++){
        lh += a[i];
        if(a[i]==0){
            rh = sum -lh;
            if(abs(lh - rh)==0){
                res++;
                res++;
            }
            if(abs(lh - rh)==1){
                res++;
            }
        }
    }
    cout << res<<endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

