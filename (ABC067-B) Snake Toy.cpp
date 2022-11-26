#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n,x;
	cin >> n >> x;
	long long a[n],sum=0;
	for(long long &x : a) cin >> x;
	sort(a,a+n);
	for(long long i=n-1;i>=n-x;--i){
		sum+=a[i];
	} cout << sum ;
	
	
	
}

