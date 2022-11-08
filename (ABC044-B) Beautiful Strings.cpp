#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  map<char,long long> mp;
  long long ok=1;
  for(long long i=0;i<s.length();i++){
  	mp[s[i]]++;
  }for(auto it : mp){
  	if(it.second%2==1) {
  		ok=0;
  		cout << "No";
  		break;
	  }
  }if(ok) cout << "Yes" ;
}
