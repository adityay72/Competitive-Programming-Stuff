#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n,ans;
 	vector<vector<int>>a(5,vector<int>(5));
 	for(int i=0;i<5;i++){
 		for(int j=0;j<5;j++){
 			cin >> a[i][j];
            if(a[i][j]==1){
                ans=abs(2-i)+abs(2-j);
            }
 		}
 	}
    cout << ans<<endl;
    return 0;

}