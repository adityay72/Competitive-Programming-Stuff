#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    vector<int>x(3);
    cin >> x[0] >> x[1] >> x[2];
    for(int i=0;i<5;i++){
    (*min_element(x.begin(),x.end()))++;
    }
    cout << x[0] * x[1] * x[2] <<endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

