#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    int n,x=0;
    string s;
 	cin >> n;
 	while(n--){
 		cin >> s;
 		if(s[1]=='+') x++;
 			else x--;
 	}   
 	cout << x << endl;

}