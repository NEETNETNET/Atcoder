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
	string s,t;
	cin >> s >> t;
	for(ll i=0;i<t.length();++i){
		if(s[i]!=t[i]) {
			cout << i+1;
			break;
		}
	}
}

