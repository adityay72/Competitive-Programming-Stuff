#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
	int n,k;
	
	int flag=0;
	cin >> n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==k)
			flag=1;
	}
	if(flag==1) 
		cout << "YES\n";
	else 
		cout << "NO\n" ;
}


int main()
{
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
    return 0;
}