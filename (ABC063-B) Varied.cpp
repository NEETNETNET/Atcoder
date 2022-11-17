#include <bits/stdc++.h>
using namespace std;

int main() {
 	string s;
 	cin >> s;
 	map<char,long long > mp;
 	for(long long i=0;i<s.length();i++){
 		mp[s[i]]++;
	 }for(auto it : mp){
	 	if(it.second>=2) {
	 		cout << "no";
	 		return 0;
		 }
	 }cout << "yes";
	 return 0;
}
