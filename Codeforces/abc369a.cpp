#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int a,b; 
    cin >> a >> b;
    if(a == b) {
        cout << "1" <<endl;
        return;
    }
    int diff = abs(a-b);
    if(diff %2==0){
        cout << "3" <<endl;
    }
    else{
        cout << "2" << endl;
    }
}

int main() {
fastio();
int t = 1;
//cin >> t;
while (t--) {
    solve();
     }
} 

