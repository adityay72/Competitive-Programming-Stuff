#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   int a,b,c;
   cin >> a >> b >> c;
   int sum =0;
   sum = abs(a-b) + abs(b-c) + abs(c-a);
   cout <<  sum/2 << endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
	solve();
 	}
} 

