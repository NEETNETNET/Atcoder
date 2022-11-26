#include <bits/stdc++.h>
using namespace std;


int main() {
	string s;
	set<long long > a;
	cin >> s;
	for(long long i=0;i<s.length();i++){
		a.insert(s[i]-'0');
	}for(long long i=49;i<=74;i++){
		if(a.find(i)==a.end()) {
			cout << (char) (i+48);
			return 0;
		}
	}cout << "None";
	return 0;
}
