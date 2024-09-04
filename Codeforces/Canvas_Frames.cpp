#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n,x,c=0;
 	cin >> n;
 	map<int ,int>m;
 	for(int i=0;i<n;i++){
 		cin >>x;
 		m[x]++;
 		if(m[x]%2==0) c++;
 	}
 	
 	// Print the map
 	// for(auto it : m){
 	//     cout << "Length: " << it.first << ", Count: " << it.second << endl;
 	// }
 	
 	cout << c/2<<endl;
}


int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}