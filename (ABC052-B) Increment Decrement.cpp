#include<bits/stdc++.h>
 using namespace std; 
 
int main(){ 
	string s;
	long long n,x=0,res=0;
	cin >> n >> s;
	for(long long i=0;i<n;i++){
		if(s[i]=='I') x+=1;
		else x-=1;
		res=max(res,x);
	}cout << res ;
	
}
