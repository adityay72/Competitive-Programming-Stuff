#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

bool isHappy(int n) {
    int tmp = 0;
    set<int> visited;

    while(true){
        tmp = 0;
        while(n > 0){
            tmp += pow((n % 10), 2);
            n /= 10;
        }
        n = tmp;
        if(n == 1){
            break;
        } else if(visited.find(n) != visited.end()){
            return false;
        }
        visited.insert(n);
    }
    return true;
}

void solve(){
    int a,n;
    cin >>a>> n;
    int res=0;
for(int i=a;i<=n;i++){
    if (isHappy(i)) {
        res++;
    } 
    
    }
    cout << res;
}

int main() {
    fastio();
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
