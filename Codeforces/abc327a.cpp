#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n;
 	cin >> n;
 	string a;
 	cin >> a;
 	bool flag =false;
 	
 	for(int i=0;i<n-1;i++){
 		if(a[i]=='a'&& a[i+1]=='b') flag =true;
 		if(a[i]=='b'&& a[i+1]=='a') flag = true;
 	}  
 	if(flag)cout << "Yes"<<endl;
 	else cout << "No"<< endl;
}