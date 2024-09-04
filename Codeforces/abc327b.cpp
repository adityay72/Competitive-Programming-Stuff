#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	ll a; cin >> a;

 	for(int i=1;i<=15;i++){
 		ll x=1;
 		for(int j=0;j<i;j++){
 			x *= i;
 		}
 		if(x==a) {
 			cout << i <<endl;
 			return 0;
 	}	
 }
 	cout << "-1"<<endl;
}