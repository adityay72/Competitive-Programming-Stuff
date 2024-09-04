#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n ;
 	
 	string s;
 	cin >>n ;
 	
 	for(int i=0;i<n;i++){
 		cin >> s;
 		if(s.size() <=10){
 		cout << s<<endl;;

 	}else
 		cout <<s[0]<<int(s.size())-2<<s.back()<<endl;;
 	}

}