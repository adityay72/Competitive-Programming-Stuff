#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,m,d,a,b;
	int sum=0;
	int cnt=0;
	cin >> n>>m>>d;
	for(int i=0;i<n;i++){
		cin >> a;
		if(a<=m){
			sum += a;
			if(sum >d) {
				cnt++;
				sum=0;
		}
	}
}
	cout << cnt;
    return 0;
}