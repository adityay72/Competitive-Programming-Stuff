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
    bool flag=true;
    rep(i,n) cin >> a[i];
    for(int i=1;i<n-1;i++){
        if(a[i-1] < a[i] && a[i]> a[i+1]){
            swap(a[i],a[i+1]);
            
        }
    }
    // for(int i=1;i<n-1;i++){
        
    //     if(a[i]>n) {
    //        flag = false;
    //         break;
    //     }
    //     int temp;
    //     temp=a[0];
    //     if(a[i]==temp){
    //         flag=false;
    //         break;
    //     }else{
    //         temp = a[i];
    //     }

    // }
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            flag=false;
            break;
        }
    }
    if(flag) cout << "YES"<<endl;
    else cout << "NO"<<endl;   
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}