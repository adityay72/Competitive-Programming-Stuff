#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a,b,c;
int main()
{	
	
	cin >> a>>b;
	if(a>b) cout << "0";
	else 
		while(b>=a){
			a=a*3;
			b=b*2;
			c++;
		}
		cout << c;

	
	

}