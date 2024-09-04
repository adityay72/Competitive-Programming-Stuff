#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int a, b, x;
    cin >> a >> b >> x;

    if (a * b <= x * x) {
        cout << "0" << endl;
    }
    else{
        if(b <=x*x) cout << "1" <<endl;
        else if (a <= x*x) cout << "1" <<endl;
        else cout << "2" << endl;
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

