#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
 	int n,k;cin >>n>>k;
 	int a[n];
 	int sum =0;
 	int cards=0;
 	rep(i,n){
 		cin >> a[i];
 		sum += a[i];
 	}
 	// cout << sum;

 	while(sum !=0){
 		if(sum >0){
 			int diff=min(k,sum);
 			sum -= diff;	
 		}
 		else {
 			int diff = min (k,-sum);
 			sum += diff;
 		}
 		cards++;
 	}
 	cout << cards;

}