#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
  int a; cin >> a; 
  if(a >=1 && a <=99){
  	cout << 100-a <<endl;
  }
  else if(a >=100 && a <=199){
  	cout << 200-a <<endl;
  }
  else if(a >=200 && a <=299){
  	cout << 300-a <<endl;
  }
}

int main() {
fastio();
int t = 1;
// cin >> t;
while (t--) {
	solve();
 	}
} 




