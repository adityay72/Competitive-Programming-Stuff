#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
int n;

int main(){
	int t,k,a,b;
	cin >> t>>k;

	for(int i=1,x;i<=2*t;i++){
		cin >> x;
		if(x== k || x==7-k){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";

}