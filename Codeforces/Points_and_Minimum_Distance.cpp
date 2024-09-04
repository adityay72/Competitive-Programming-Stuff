#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
int n;
int a[200];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T;cin>>T;
	while(T--)
	{
		cin>>n;
		for(int i=0;i<2*n;i++)cin>>a[i];
		sort(a,a+2*n);
		cout<<a[n-1]-a[0]+a[2*n-1]-a[n]<<"\n";
		for(int i=0;i<n;i++)cout<<a[i]<<" "<<a[n+i]<<"\n";
	}
}