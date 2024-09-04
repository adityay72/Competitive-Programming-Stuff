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
   vector<int>a(n);
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   int frst =0;
   int sec = n-1;
   int cnt=0;
   while(frst <= sec){
       if(frst > sec){
           cnt = max(cnt,frst);
       }
       else{
           cnt = max(cnt,sec);
       }
       frst+=2;
       sec+=2;
   }
   cout << cnt << endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
    solve();
     }
} 

