#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,ans;
string x;


int main()
{	
	
	cin >> n;
	cin >> x;
	int k_a =0 ;
	int k_d=0;
	for(int i=0;i<n;i++)
		if(x[i]=='A') k_a++ ;else k_d++;
	
	if(k_a>k_d) cout << "Anton\n";
	if(k_a<k_d) cout << "Danik\n";
	if(k_a==k_d) cout << "Friendship\n";
	return 0;
}
