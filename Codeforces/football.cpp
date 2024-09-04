#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n,cnt=0,cnt2=0,cntf=0; cin >> n;
 	string s,s1,s2;
 	
 	
 	rep(i,n){
 		cin >> s;
 		if(s==s1|| s1 ==""){
 			s1 =s;
 			cnt++;
 		}
 		else {
 			s2=s;
 			cnt2++;
 		}

 	}
 	if(cnt>cnt2) cout << s1;
 	else cout << s2;
 	

}