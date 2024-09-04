#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

void solve(int n){
   int a[n];
   int last;   
   rep(i,n){
   	cin >> a[i];
   	a[i]=last;
    if(a[i+1]==last){
    	swap(last,a[i+1]);
    }
    
   }

   


}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve(t);
    }
}