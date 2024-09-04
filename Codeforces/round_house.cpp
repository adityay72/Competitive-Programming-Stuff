#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	ll n,b;
 	int a;
 	cin >> n >> a >> b;
	a +=b;
	while(a>n) a-=n;
	while(a<1) a+=n;
	cout << a << endl; 	

 	}

