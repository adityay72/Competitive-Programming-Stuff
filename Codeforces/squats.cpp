#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n; cin  >> n;
 	int cntx=0,cntX=0;
 	string s;
 	rep(i,n){
 		cin >> s;
 		if(s[i]=='x')cntx++;
 		if(s[i]=='X')cntX++;

 	}
 	int min=0;
 	int xtra=0;
 	if(cntx>cntX)
 		{
 			xtra= cntx-n/2;
 			for(int i=0;i<n && xtra>0;i++){
 				if(s[i]=='x') {
 					s[i]='X';
 					xtra--;
 					min++;
 			}

 		}
 	} 
 	else if (cntx<cntX){
 		xtra=cntX-n/2;
 		for(int i=0;i<n && xtra>0;i++){
 			if(s[i]=='X'){
 				s[i]='x';
 				xtra--;
 				min++;
 			}
 		}
 	}

 	cout << min << endl;
 	cout << s << endl;
}