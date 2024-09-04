#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
    int n,k; cin >> n >> k;
    vector<vector<char>>a(n,vector<char>(n));

    for(int i=0;i<n;i++){
        string row;
        cin >> row;
        for(int j=0;j<n;j++){
            a[i][j] = row[j];
        }
    }
    for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
            cout << a[i][j]; 
        }
        cout <<endl;
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

