#include<bits/stdc++.h>
using namespace std;


int main(){
	long long n,m;
	cin >> n >> m;
	char a[n][m];
	for(long long i=0;i<n;i++){
		for(long long k=0;k<m;k++) cin >> a[i][k];
	}for(long long i =0;i<n+2;i++){
		for(long long k=0;k<m+2;k++) {
			if(i-1>=0&&k-1>=0&&i-1<=n-1&&k-1<=m-1) cout << a[i-1][k-1];
			else cout << '#'; 
		}cout << endl;
	}
	
}

