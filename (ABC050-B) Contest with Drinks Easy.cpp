#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long n,m;
	cin >> n ;
	long long a[n];
	for(long long &x : a) cin >> x;
	cin >> m;
	long long b[m],j=0;
	
	for(long long i=0;i<m;i++){
		long long x,y,sum=0;
		cin >> x >> y;
		for(long long i=0;i<n;i++){
			if(i==x-1) sum+=y;
			else sum+=a[i];
		}b[j++]=sum;
	}
	for(long long x : b) cout << x << endl; 
}
