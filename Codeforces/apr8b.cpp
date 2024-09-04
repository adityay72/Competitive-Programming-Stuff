#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007
/*
 1.
 2.
 3.
 4.
 5. yololist
 6.
 8.


 
 */

void solve(){
 	int n,c,d;
 	cin >> n >> c >> d;
    int mn= int_max;
    map<int , int> mp ;
    for(int i=0;i<n*n;i++){
        int a;
        cin >> a;
        mn = min(mn,a);
        mp[a]++;
    }
    int first = mn,rmove;
    for(int i=0;i<n;i++){
        first = mn + i*c;
        rmove = first;
        if(!mp[rmove]){
            cout << "no\n";
            return;
        }
        for(int j=0;j<n;j++){
            rmove = first +j*d;
            if(!mp[rmove]){
                cout << "no\n";
                return;
            }
            mp[rmove]--;
        }
    }
    cout << "yes\n";
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
