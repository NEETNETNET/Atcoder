#include <bits/stdc++.h>
using namespace std;

int main() {
 	long long n,cnt=1;
 	cin >> n;
 	long long a[n];
 	for(long long &x : a) {
	 	cin >> x;
	}
 	long long i=0;
 	while(1){
 		if(a[i]==2) {
			cout << cnt;
			break;
		}if(cnt>=n){
			cout << -1 ;
			break;
		}i=a[i]-1;
 		cnt++;
	 }
}
