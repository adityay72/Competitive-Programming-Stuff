#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n,a,b;
 	cin >> n;
 	int sum=0;
 	int mn=1111111111;
 	rep(i,n){
 		cin >> a >> b;
 		mn=min(mn,b);
 		sum+=a*mn;

 	}
 	cout << sum;

}