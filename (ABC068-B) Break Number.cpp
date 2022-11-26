#include<bits/stdc++.h>
using namespace std;

long long div2(long long n){
	long long cnt=0;
	while(n%2==0){
		cnt++;
		n/=2;
	}return cnt;
}
int main(){
	long long n,res=-1,ans=0;
	cin >> n;
	for(long long i=1;i<=n;i++){
		if(res<div2(i)){
			res=div2(i);
			ans=i;
		}
	}
	cout << ans;
	
	
	
}

