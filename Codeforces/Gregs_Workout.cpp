#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n,ch=0,bi=0,bk=0,t;
 	cin >> n;
 	vector<int> a(n);
 	vector<int> m(3,0);

 	rep(i,n){
 		cin >> a[i];
 		m[i%3] += a[i];
 	}
 	if(m[0]> m[1] && m[0] >m[2]) cout << "chest";
 	else if(m[1]>m[0]&& m[1]>m[2]) cout << "biceps";
 	else cout << "back";

 	
 	
}