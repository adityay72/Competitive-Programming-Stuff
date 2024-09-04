#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,t,k,d;
	cin >> n >> t >> k >> d;
	int t1 = ((n+k-1)/k);
	int if_no= t1*t;
	int t2 = d + t*(n/(2*k));
	if(t1<=t2) {cout << "NO";}
	else cout << "YES";
	

    return 0;
}