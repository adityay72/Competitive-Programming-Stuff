#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int t;
 	cin >> t;
 	vector<int>a(t);
 	rep(i,t){
 		cin >> a[i];
 	}
 	for(int i=0;i<t;i++){
 		int res=0;
 		for(int j=0;j<t;j++){
 			if(a[i]<a[j]){
 			res++;	
 			}
 			
 		}
 		if(i)cout << " ";
 		cout << res+1;
 	}
 	cout << endl;
 	return 0;


	   
}