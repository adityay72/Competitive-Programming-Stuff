#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int x,y,k;
    cin >> x >> y >> k; 
    ll sum =0; 
    ll a =0; 
    ll b =0; 
    a = ceil((double)x/k);
    b = ceil((double)y/k);
    sum = a + b + abs(a-b);
    if(a > b)sum--;
    cout << sum << endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

