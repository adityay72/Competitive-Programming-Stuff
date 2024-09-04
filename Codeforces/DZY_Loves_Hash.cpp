#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(){
 	int n,p,a,rem;
 	cin >> p>> n;
 	set<int>s;
 	bool flag =false;
 	for(int i=0;i<n;i++){
 		cin >> a;
 		rem=a%p;
 		if(s.count(rem)==1){
 			cout << i+1;
 			flag =true;
 			break;

 		}
 		s.insert(rem);
 		
 		

	}
	if(!flag)cout << "-1";
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