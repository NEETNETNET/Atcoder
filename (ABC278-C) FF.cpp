#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(ll i=a;i>=b;--i)



int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    map<int, map<int, bool>> mp;
	int n,q;
	cin >> n >> q;
	
	while(q--){
		int x,y,z;
		cin >> x >> y >> z;
		--y;--z;
		if(x==1){
			mp[y][z]=true;
		}else if(x==2){
			mp[y][z]=false;
		}else if(x==3){
			if(mp[y][z]&&mp[z][y]) cout << "Yes"<< endl;
			else cout << "No" << endl;
		}
	}
    
    
	
}
// dung map luu tranh RTE
