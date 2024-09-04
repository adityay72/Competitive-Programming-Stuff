#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   int a[8];
   for(int i=0;i<7;i++){
	   cin >> a[i];
   }
   vector<int> ans;
   if((a[0]+a[1]+a[2]) == a[6] ){
	   ans.push_back(a[0]);
	   ans.push_back(a[1]);
	   ans.push_back(a[2]);
   }
 	else if((a[0]+a[1]+a[2]) < a[6] ){
	   ans.push_back(a[0]);
	   ans.push_back(a[1]);
	   ans.push_back(a[6]-a[0]-a[1]);
}
	for(auto&v : ans){
		cout << v << " ";
	}
	cout << endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
	solve();
 	}
} 

