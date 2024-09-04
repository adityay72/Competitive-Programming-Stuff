#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

struct{
	int a,b;
	string s;
}s[10000];

int main() {
    fastio();
 	int n;  cin >> n;
 	string a,b;
 	for(int i=0;i<n;i++){
 		cin >> a >> b;

 		
 		if(b== "rat") cout << a;	
 		else if(b== "woman") cout << a;
 		else if (b== "child") cout << a;
 		else if (b== "man") ;
 		else if(b=="captain") ;

 	}

}