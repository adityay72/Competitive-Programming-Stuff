#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    ll a,b,c;
    ll r1,r2,r3;
   	cin >> a >> b >> c;
   	
   	cout << 4*(sqrt(a*b/c)+sqrt(b*c/a)+sqrt(a*c/b)) << endl;
   		
   	 
}