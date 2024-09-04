#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	string s1,s2;
 	cin >> s1;

 	for(int i=0;i < s1.size()/2;i++){
 		swap(s1[i],s1[s1.size()-i-1] );
 	}
 	// cout << s1;
 	cin >> s2;
 	if(s1==s2)cout << "YES";
 	else cout << "NO";

}