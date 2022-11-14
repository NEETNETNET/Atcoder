#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n,m;
	cin >> n >> m;
	long long a[50]={0};
	for(long long i=0;i<m;i++){
		long long x,y;
		cin >> x >> y;
		x--;
		y--;
		a[x]++;
		a[y]++;
	}for(long long i=0;i<n;i++){
		cout << a[i] << endl;
	}
	
}

