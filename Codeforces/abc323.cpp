#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   int n; cin >> n; 
   vector<pair<int, int>> win(n);
   for(int i =0;i<n;i++){
	   string s;
	   cin >> s;
	   win[i] = {count(s.begin(),s.end(),'o'),i};
	   
   }
   auto cmp =[](pair<int,int> a, pair<int, int> b){
	   if(a.first != b.first) return a.first > b.first;
	   return a.second < b.second;
   };
   sort(win.begin(),win.end(),cmp);
   vector<int> ans(n);
   for(int i =0;i<n;i++) ans[i] = win[i].second + 1;
   for(int i =0;i<n;i++) cout << ans[i] << "\n"[i == n-1];

}

int main() {
fastio();
int t = 1;
// cin >> t;
while (t--) {
	solve();
 	}
} 

