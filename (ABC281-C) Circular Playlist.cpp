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
	ll n,t,sum=0;
	cin >> n >> t;
	ll a[n];
	fort(i,0,n) {
		cin >> a[i];
		sum+=a[i];
	}if(t> sum) t%=sum;
	ll k=0;
	while(t>=a[k]){
		t-=a[k];
		++k;
	}cout << k+1 << " " << t;	
}
// thieu truong hop t%sum==0 va mot vai truong hop chia het khac
