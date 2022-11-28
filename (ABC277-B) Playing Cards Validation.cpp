#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(ll i=a;i>=b;--i)
#define pb push_back
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    
	set<char> s{'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
	set<char> p{'H','D','C','S'};
	set<string> h;
	ll n,ok=1;
	cin >> n;
	ll m=n;
	while(m--){
		string a;
		cin >> a;
		h.insert(a);
		if(!p.count(a[0])) {
			ok=0;
		}if(!s.count(a[1])){
			ok=0;
		}
	}if(h.size()<n||ok==0) cout << "No";
	else if(ok&&h.size()==n) cout << "Yes";
    
    
	
}

