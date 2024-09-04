#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n;
    cin >> n;
    vector<vector<char>>a(n,vector<char>(4));
    vector<int>res;
    for(int i=0;i<n;i++){
        for(int j=1;j<5;j++){
            cin >> a[i][j];
            if(a[i][j]== '#'){
                res.push_back(j);
            }
        }
    }
    int size=res.size();
    for(int i=size-1;i>=0;i--){
        cout << res[i] << " ";
    }
    cout << endl;

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

