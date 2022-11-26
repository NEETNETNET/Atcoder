#include <bits/stdc++.h>
using namespace std;

int even(string s){
	if(s.length()%2!=0) return 0;
	else {
		if(s.substr(0,s.length()/2 )!=s.substr(s.length()/2 ,s.length()/2)) return 0;
	}return 1;
}
int main() {
	string s;
	cin >> s;
	long long m=s.length()-1;
	while(1){
		if(even(s.substr(0,m))){
			cout << m;
			break;
		}
		m--;
	}
	
		
	

 	
}
