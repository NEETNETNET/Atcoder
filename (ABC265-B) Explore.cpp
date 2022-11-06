#include<bits/stdc++.h>
using namespace std;
int main(){
	long n,m,t;
	cin >> n >> m >> t;
	long a[n-1],b[m][2],c[n-1]={0};
	for(long &x : a) cin >> x;
	for(long i=0;i<m;i++){
		for(long k=0;k<2;k++) {
			cin >> b[i][k];
		}
	}
	for(long i=0;i<m;i++){
		if(b[i][0]) {
			c[b[i][0]-1]=b[i][1];
		}
	}
	for(long i=0;i<n-1;i++){
		if(t<=a[i]) {
			cout << "No";
			return 0;
		}
		t-=a[i];
		t+=c[i+1];
	}
	cout << "Yes";
	
	// khong can phai luu vao mang hai chieu b 
}
