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
    rep(i,n) cin >> a[i];
    int cnt =0;
    int i=0;
    while(i < 0 && a[i]<=0){
        i++;
    }
    int r=n-1;
    while(r>=0 && a[r]>=0){
        r--;
    }
    if(r<=i){
        cout << "0" << endl;
    }else{
        int cnt=0;
        for(int j=i;j<r;j++){
            if(a[i]<0) cnt++;
        }
        cout << cnt << endl;
    }


}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

