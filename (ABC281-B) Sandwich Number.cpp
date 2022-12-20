#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long l;
#define fort(i,a,b) for(ll i=a;i<b;++i)
#define fort1(i,a,b) for(ll i=a;i<=b;++i)
#define forg(i,a,b) for(ll i=a;i>=b;--i)
#define pb push_back

bool is_digit(char s){
	return s >= '0'&& s <= '9';
}
bool is_upper(char s){
	return s >='A' && s <='Z';
}
int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	string s;
	cin >> s;
	bool ans = true;
	ans &= (s.length()==8) & (is_upper(s[0])) & (is_upper(s[7])) & (s[1]!='0');
   	for(int i=1;i<7;++i) ans&=(is_digit(s[i]));
	cout << (ans ? "Yes" : "No");
	
}

