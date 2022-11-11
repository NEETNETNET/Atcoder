#include<bits/stdc++.h>
 using namespace std; 
 
int main(){ 
	string s;
	cin >> s;
	long long i=0,k=s.length()-1;
	while(s[i]!='A'){
		i++;
	}while(s[k]!='Z'){
		k--;
	}cout << (k-i)+1;
}
