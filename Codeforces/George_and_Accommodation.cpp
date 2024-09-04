#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	ll t,p,q,cnt=0;
 	cin >> t;
 	rep(i,t){
 	cin >> p>>q;
 	if(p<q-1) cnt++;
 }

 	cout << cnt;   
}