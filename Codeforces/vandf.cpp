#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,h,a,ans;


int main()
{
	cin >> n >> h;
	ans = n;
	for(int i =0; i<n;i++){
		cin >> a;
		ans += (a>h);
	}
	cout << ans << endl;
	return 0;
	
}
