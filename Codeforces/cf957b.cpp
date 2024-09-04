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
    vector<int>A(k);
    for(auto&a:A) cin >> a;
    sort(A.begin(),A.end());
    int ops=0;
    for(int i=0;i<k-1;i++){
        ops += 2*A[i] -1;
    }
    cout << ops <<endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

