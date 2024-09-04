#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


int main()
{
	ll a,b,c;
	cin >> a >> b;
	c= 6- max(a,b) +1;
	ll t =6;
	ll cd = gcd(c,t);

	c /= cd;
	t /= cd;

	cout << c << "/"<< t;
	    
}