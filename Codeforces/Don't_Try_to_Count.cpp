#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
    int n,m,res=0;
    cin >> n >> m;
    // char s1[n];
    // char s2[m];
    // rep(i,n) cin >> s1[i];
    // rep(j,m) cin >> s2[j];
    string a,b,temp;
    cin >> a >> b;
    while(a.find(b)==string::npos){
        if(a.length() > 1e5) {
            cout << "-1"<<endl; return ;
        }
        a +=a;
        res++;

    }
    cout << res << endl;

    



}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}