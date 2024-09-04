#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    int n,k; cin >> n >> k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
    	if(i%2==1) cin << a[i]; 
    	
    }
    for(int i=1;i<n;i++){
    	if(i%2==0) cin << a[i];
    	
    }
    cout << a[k-1];
}