#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	
 	int n;
 	cin >> n;
 	int a[n];
 	rep(i,n){
 		cin >> a[i];
 		if(a[i]>0) {
 			cout << a[i] <<endl;

 		}

 	}   
}