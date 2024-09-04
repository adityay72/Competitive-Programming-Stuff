#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{	
	int n;
	
	int cnt=0;
	cin >> n;
	int a;
	int last=0;
	for(int i=0;i<n;i++){
		cin >> a;
	if(a != last) cnt++;
	last=a;
	}
	cout << cnt;

    return 0;
}