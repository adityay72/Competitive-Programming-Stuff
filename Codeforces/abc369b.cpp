#pragma GCC optimize(2)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline","fast-math","unroll-loops","no-stack-protector")
#pragma GCC diagnostic error "-fwhole-program"
#pragma GCC diagnostic error "-fcse-skip-blocks"
#pragma GCC diagnostic error "-funsafe-loop-optimizations"
#include <bits/stdc++.h>
#define INF 1000000000
#define LINF 1000000000000000000
#define MOD 1000000007
#define mod 998244353
#define F first
#define S second
#define ll long long
#define N 100010
using namespace std;
ll n;
vector<ll> v1,v2;
int main(){
	ll i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		ll x;
		char c;
		cin>>x>>c;
		if(c=='L')
		{
			v1.push_back(x);
		}
		else
		{
			v2.push_back(x);
		}
	}
	ll ans=0;
	for(i=1;i<v1.size();i++)
	{
		ans+=abs(v1[i]-v1[i-1]);
	}
	for(i=1;i<v2.size();i++)
	{
		ans+=abs(v2[i]-v2[i-1]);
	}
	cout<<ans<<'\n';
	return 0;
}
