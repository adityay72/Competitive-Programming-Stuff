#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	string s;
	ll n,a,b,c,d;
	int sum =0;
	cin >> n;
	for(int i=0; i<n;i++){
		cin >> s;
		if(s=="Tetrahedron") sum +=4;
		if(s=="Cube") sum +=6;
		if(s=="Octahedron")sum +=8;
		if(s=="Dodecahedron")sum += 12;
		if(s=="Icosahedron")sum += 20;
	}
	cout << sum;
    return 0;
}