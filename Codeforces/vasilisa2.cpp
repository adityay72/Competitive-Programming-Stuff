#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)

int main() {
    fastio();
    ll r1,r2,c1,c2,d1,d2,x,y;
    ll a,b,c,d;
    bool f=false;
    // int a[i][j];
    cin >> r1>>r2;
    cin >> c1>>c2;
    cin >> d1>>d2;
    for(a=1;a<=9;a++)for(b=1;b<=9;b++)for(c=1;c<=9;c++)for(d=1;d<=9;d++){
    	if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d  ){
            if(a+b==r1 && a+c==c1&&a+d==d1&&b+d==c2&&b+c==d2&&c+d==r2){
                cout << a << " " << b << endl;
                cout << c << " " << d << endl;
                f=true;
            }
            
        }
        
    }
    if(!f) cout << "-1";	
    return 0;
}