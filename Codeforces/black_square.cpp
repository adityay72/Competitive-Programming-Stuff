#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll a,b,c,d;
	string s;
	int sum=0;
	cin >> a >> b >> c >> d;
	cin >> s;
	for(int i =0;i<s.size();i++){
		if(s[i]=='1') sum +=a;
		if(s[i]=='2') sum +=b;
		if(s[i]=='3') sum +=c;
		if(s[i]=='4') sum +=d;
	}
	cout << sum << endl;


    return 0;
}