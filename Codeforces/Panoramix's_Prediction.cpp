#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    ll m,n;
    int flag=0;
 	cin >> m >> n;
 	for(int i =2; i <= m/2;i++){
 		if(m%i==0) cout << "NO";
 		else cout << i << "i"<< endl;
 		}
 	for(int j =2; j <= n/2;j++){
 		if(n%j==0) cout << "NO";
 		else cout << j  << endl;
 		}	
}