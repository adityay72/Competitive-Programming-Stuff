#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   ll n,x; cin >> n >> x;
   vector<int>a(n);
   ll sum=0,cnt=0;
   rep(i,n){
      cin >> a[i];
   } 
   sort(a.rbegin(),a.rend());
   rep(i,n){
      if(a[i] >= x){
         cnt++;
         sum+= a[i]-x;
         continue;
      }
      ll req= x-a[i]; 
      if(req <= sum){
         cnt++;
         sum -= req;
         continue;
      }
   }
   cout << cnt <<endl;
}
int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
	solve();
 	}
} 

