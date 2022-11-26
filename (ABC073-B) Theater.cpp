#include <bits/stdc++.h>
using namespace std;


int main() {
	long long n,sum=0;
	cin >> n;
	for(long long i=0;i<n;i++){
		long long x,y;
		cin >> x >> y;
		sum+=(y-x+1);
	}cout << sum;
}
