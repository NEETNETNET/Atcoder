#include<bits/stdc++.h>
using namespace std; 


int main(){ 
	string a,b;
	cin >> a >> b;
	long long res=max(a.length(),b.length());
	for(long long i=0;i<res;i++){
		if(i<a.length()&&i<b.length()) cout << a[i] << b[i];
		else if(i==a.length()&&i<b.length()) cout << b[i] ;
		else if(i==b.length()&&i<a.length()) cout << a[i] ;
	}
}
