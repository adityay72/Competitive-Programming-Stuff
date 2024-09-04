#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   int a;
   cin >> a;
   char s[a];
   int count=0;
	rep(i,a) cin >> s[i];
	rep(i,a){
		if(s[i] == '*' && s[i+1] == '*'){
			cout << count << endl;
			return ;
		}
		if(s[i] == '@') {
			count++;
		}
	}
	cout << count << endl;
	   
}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
	solve();
 	}
} 

