#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n;
 	cin >> n;
 	if(n==0) cout << "1";
 	else if(n%4==1) cout << "8";
 	else if(n%4==2)cout << "4";
 	else if(n%4==3)cout <<"2";
 	else if(n%4==0)cout << "6";
 }