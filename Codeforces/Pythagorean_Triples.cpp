#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	ll n; cin >> n;
 	if(n==1 || n==2) cout << "-1";
 	else if(n%2 ==1){
 		ll m = (n* n -1) /2;
 		ll p = (n* n +1) /2;
 		cout << m << " " << p;

 	}
 	else if(n%2 ==0){
 		ll j = (n/2) * (n/2) -1;
 		ll k = (n/2) * (n/2)+1;
 		cout << j << " " << k;
 	} 
 	else cout << "-1";

}