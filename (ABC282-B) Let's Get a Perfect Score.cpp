#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long l;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define fort1(i,a,b) for(ll i=a;i<=b;++i)
#define forg(i,a,b) for(ll i=a;i>=b;--i)
#define pb push_back


int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	ll n,m;
	cin >> n >> m;
	char a[n][m];
	fort(i,0,n){
		fort(k,0,m) cin >> a[i][k];
	}ll cnt=0;
	fort(i,0,n){
		fort(k,i+1,n){
			int ok=1;
			fort(l,0,m) {
				if(a[i][l]=='x'&&a[k][l]=='x') ok=0;
			} if(ok) cnt++;
		}
	}cout << cnt;
	
   	
	
	
}

