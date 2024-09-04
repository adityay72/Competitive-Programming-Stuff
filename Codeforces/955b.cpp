#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define N 1000000007

void solve(){
   int x,y,k;
   cin >> x >> y >> k;
   while(x!=1 && k>0){
	   int t = y-x%y;
		   if(t>k)
		   {
			   x+=k;
			   k=0;
		   }
		   else
		   {
			   x+=t;
			   k-=t;
		   }
	   while(x%y==0) x/=y;
   }
   if(x>0)
   {
	   k%=y-1;
	   x+=k;
   }
   cout << x <<endl;
    
 	 

}

int main() {
fastio();
int t = 1;
cin >> t;
while (t--) {
	solve();
 	}
} 

