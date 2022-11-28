#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(ll i=a;i>=b;--i)

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    ll h,w;
    
	cin >> h >> w;
   	string a[w],b[w];
   	fort(i,0,h){
   		string s;
   		cin >> s;
   		fort(k,0,w) a[k]+=s[k];
   	}
   	fort(i,0,h){
   		string s;
   		cin >> s;
   		fort(k,0,w) b[k]+=s[k];
   	}
	
	sort(a,a+w);
   	sort(b,b+w);
	
	fort(i,0,w){
   		if(a[i]!=b[i]) {
   			cout << "No";
			return 0;	
		}	
	}cout << "Yes";
}
// luu cac cot cua 2 mang 2 chieu vao 2 mang 1 chieu, sap xep roi so sanh  
