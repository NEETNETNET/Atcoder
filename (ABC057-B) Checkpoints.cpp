#include<bits/stdc++.h>
using namespace std; 


int main(){ 
	long long n,m;
	cin >> n >> m;
	long long a[n][2],b[m][2];
	for(long long i=0;i<n;i++){
		for(long long k=0;k<2;k++) cin >> a[i][k];
	}for(long long i=0;i<m;i++){
		for(long long k=0;k<2;k++) cin >> b[i][k];
	}for(long long i=0;i<n;i++){
		long long res=10000000000;
		long long j=0;
		for(long long k=0;k<m;k++){
			if(res>abs(a[i][0]-b[k][0])+abs(a[i][1]-b[k][1])){
				res=abs(a[i][0]-b[k][0])+abs(a[i][1]-b[k][1]);
				j=k+1;
			}
		}cout << j << endl; 
	}
}
