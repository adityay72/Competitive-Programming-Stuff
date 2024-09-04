#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    string river;
    cin >> river;
    river = "L" + river + "L";
    int current =0,swim =0;
    while(current <= n){
        if(river[current]=='C') break;
        if(river[current]=='W'){
            swim++;
            current++;
            continue;
        }
        assert(river[current]=='L');
        bool jumped = false;
        for(int i=min(current+m,n+1);i>current;i--){
            if(river[i]=='L'){
                current =i;
                jumped = true;
                break;
            }
        }
        if(jumped) continue;
        for(int i=min(current+m,n+1);i>current;i--){
            if(river[i]=='W'){
                current =i;
                jumped = true;
                break;
            }
        }
        if(!jumped) break;
    }
    cout << ((current > n && swim <= k )? "YES" : "NO") << endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

