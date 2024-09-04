#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
 int a;
 int sum=0,m,n;
 cin >> a;
 
 while(a>0){
    m= a%10;
    sum = sum + m;
    a = a/10;
 }
 if(sum%3==0)cout << "Second"<<endl;
 else cout << "First" <<endl;    
 
}

int main() {
    fastio();
    int t =1;
    cin >> t;
    while (t--) {
        solve();
    }
}