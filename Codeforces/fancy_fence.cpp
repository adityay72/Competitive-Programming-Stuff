#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a;
int main()
{

	int t;
	int x;
	cin >> t;
	for(int i=0;i<t;i++){
		cin>>a;
		if(360 % (180-a)==0) cout << "YES\n";
		else cout << "NO\n";
	
	}
    return 0;
}