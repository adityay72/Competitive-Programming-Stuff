#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   int n; cin >> n;
   int t; cin >> t;
   int k; cin >> k;
   vector<int>nums(n);
   for(int i=0;i<n;i++){
   		cin >> nums[i];
   }
   sort(nums.begin(),nums.end(),greater<int>());
   int res;
   res = t-nums[k-1];
   cout << ((res <0)?0:res)<<endl;
}

int main() {
fastio();
int t = 1;
//cin >> t;
while (t--) {
	solve();
 	}
} 

