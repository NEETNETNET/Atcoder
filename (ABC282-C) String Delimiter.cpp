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
	string s;
	cin >> s;
	ll cnt=0;
	for(ll i=0;i<s.length();++i){
		if(s[i]=='"') cnt++;
		else if(s[i]==','&&cnt%2==0) s[i]='.';
	}cout << s;
	
   	
	
	
}

