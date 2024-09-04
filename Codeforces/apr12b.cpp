#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() 
  {  fastio();
 	int t=0;
 	cin >> t;
 	while(t--){
 	int n;cin>>n;
 	vector<int> v ;
 	map<int,int> map;
 	rep(i,n){
 		int x; cin >> x;
 		v.push_back(x);
 		map[x]++;
 	}   
 	if(map.size()==1){
 		cout << "-1" <<endl;
 		continue;
 		
 	}
 	int ans = n;
        for(int i = 1; i < n - 1; i++) {
            if(v[i - 1] == v[i + 1]) {
                int cnt = map[v[i - 1]] + map[v[i]] + map[v[i + 1]];
                ans = min(ans, n - cnt);
            }
        }
        if(ans == n) 
            ans = -1;
        
        cout << ans << endl;
 	
 	}   
 	return 0;
}