#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n; cin >> n;
 	vector<vector<int>>a(n,vector<int>(n));
 	int res=0;
 	for(int i=0;i<n;i++){
 		for(int j=0;j<n;j++){
 			cin >> a[i][j];
 		}
 		
 	}
 	vector<int>gc;
 	for(int i=0;i<n;i++){
 		bool flag=true;
 		for(int j=0;j<n;j++){
 			if( i!=j && (a[i][j]==1 || a[i][j]==3)){
 				flag=false;
 				break;
 			}
 		}
 		if(flag){
 		gc.push_back(i+1);
 		}
 	}
 	cout << gc.size()<<endl;
 	for(int car:gc){
 		cout << car<<" ";
 	}
 	cout << endl;
 	
 	
}

int main() {
    fastio();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}