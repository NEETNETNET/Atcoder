#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long n,k,ans=1;
    cin >> n >> k;

    for(long long i=0;i<n;i++){
    	if(!i) ans*=k;
    	else ans*=(k-1);
	}cout << ans;
	
}

