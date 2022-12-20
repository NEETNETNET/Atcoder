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
	ll n;
	cin >> n;
	ll a[n];
	fort(i,0,n) cin >> a[i];
	ll b[n];
	ll sum=0;
	fort(i,0,n){
		b[i]=a[i]-sum;
		sum+=b[i];
	}fort(i,0,n) cout << b[i] << " ";
	
}

