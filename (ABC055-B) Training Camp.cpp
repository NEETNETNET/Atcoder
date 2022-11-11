#include<bits/stdc++.h>
using namespace std; 

long long mod = 1000000007;
long long gt(long long n){
	if(n==0||n==1) return 1;
	return ((n%mod) *(gt(n-1)%mod))%mod;
}
int main(){ 
	long long n;
	cin >> n;
	cout << gt(n);
}
