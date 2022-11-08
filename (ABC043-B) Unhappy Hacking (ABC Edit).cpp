#include<bits/stdc++.h>

using namespace std;

int main(){
	string s;
	string n="";
	cin >> s;
	for(long i=0;i<s.length();i++){
		if(s[i]=='1') n+='1';
		else if(s[i]=='0') n+='0';
		else if(s[i]=='B') {
			if(n=="") continue;
			string a="";
			for(long k=0;k<n.length()-1;k++){
				a+=n[k];
			}n=a;
		}
	}cout << n;
}

// co the dung vector : dung ham pop_back, push_back
