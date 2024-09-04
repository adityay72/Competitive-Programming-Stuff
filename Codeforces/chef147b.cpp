#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int o,w,g; 
    cin >> o >> w >> g;
    //vector<int>temp={o,w,g};
    if(w-(o+g)>1) {cout << "NO" <<endl;return;}
    else if(g-(w+o)>1){ cout << "NO" <<endl; return;}
    else if(o-(g+w)>1){ cout << "NO" <<endl; return;}
    else {
        cout << "YES" << endl;
        return;
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

