#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int a,b;
 	cin >> a >> b;
 	int t = min(a,b);
 	int s = max(a,b);
 	cout << t << " " << (s-t)/2;
 	 
}