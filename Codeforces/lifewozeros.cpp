#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int rem(int num){
	int dig = num % 10;
	num /= 10;
	int res=0;
	res = num + dig;
	return res;

	

}


int main() {
    fastio();
 	ll a,b,c;
 	cin >> a;
 	cin >> b;
 	c= a+b;
 	rem(c);
 	cout << c;

}