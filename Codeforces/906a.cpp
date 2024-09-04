#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    sort(a.begin(),a.end());
   int sum = a[0]+a[n-1];

   for(int i=0;i<n/2;i++){
   	if(a[i]+a[n-i-1] != sum){
   		cout << "NO"<<endl;
   		return;
   	}
   }
   cout << "YES"<<endl;

}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}