#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   int n;
   int a;
   cin >> a;
   int count=0;
   int res=0;
   for(int i=0;i<a;i++){
	   int x;
	   cin >> x;
	   res = (res/x+1) * x;

   }
   cout << res << endl;
	
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
	solve();
 	}
} 

