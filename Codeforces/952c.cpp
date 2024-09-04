#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   unordered_set<int> set;
   int n ;
   cin >> n;
   int a[n];
   rep(i,n) cin >> a[i];
   int sum=0;
   int count=0;
   for(int i=0;i<n;i++){
	   sum += a[i];
	   if(sum == 2*a[i] || set.count(sum - a[i])){
			   count++;
			   }
		set.insert(a[i]);
   }
   cout << count << endl;
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
	solve();
 	}
} 

