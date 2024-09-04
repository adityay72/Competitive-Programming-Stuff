#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

	int n; cin >> n;
	int a[n];
	int uncr=0;
	int avoff=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==-1){
			if(avoff >0) avoff--;else uncr++;
		}
		else avoff+= a[i];
			}
	cout << uncr;
    return 0;
}