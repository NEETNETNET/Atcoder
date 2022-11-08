#include<bits/stdc++.h>

using namespace std;
int check(long a[],long k,long n){
	while(n>0){
		for(long i =0 ;i<k;i++){
			if(n%10==a[i]) return 0;
		}
		n/=10;
	}return 1;
}
int main(){
	long n,k;
	cin >> n >> k;
	long a[k];
	for(long &x : a) cin >> x;
	for(;;n++){
		if(check(a,k,n)) break;
	}cout << n;
}

