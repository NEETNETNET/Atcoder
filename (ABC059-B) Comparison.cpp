#include<bits/stdc++.h>
using namespace std; 


int main(){ 
	string a,b;
	cin >> a >> b;
	if(a.length()>b.length()) cout << "GREATER";
	else if(a.length()<b.length()) cout << "LESS";
	else {
		int ok=1;
		for(long long i=0;i<a.length();i++){
			if(a[i]>b[i]) {
				cout << "GREATER";
				ok=0;
				break;
			}else if(a[i]<b[i]) {
				cout << "LESS";
				ok=0;
				break;
			}
		}if(ok) cout << "EQUAL";
	}
}
