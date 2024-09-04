#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int a[3];
 	rep(i,3){
 		cin >> a[i];
 	}
 	sort(a,a+3);
 	
 	int b=a[1];
 	int c = (abs(b-a[0])+abs(b-a[2]));
 	cout << c ;
 	

 	
}