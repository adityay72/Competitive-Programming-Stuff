#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

bool solve(int t,int k){
    set<int> x;
    while(t>0){
    x.insert(k%10);
    t /= 10;
	}
	for(int i =0;i<t;i++){
		if(x.find(i)==x.end()){
			return false;
		}
	}
	return true;
}

int main() {
    fastio();
    int k,t = 1;
    cin >> t>>k;
    
        solve(t,k);
    
}