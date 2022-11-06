#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,t;
	int ok=1;
	cin >> s >> t;
	for(long long i=0;i<s.length();i++){
		if(s[i]!=t[i]) {
			cout << "No" ;
			ok=0;
			break;
		}
	}if(ok) cout << "Yes";
	
	
}
