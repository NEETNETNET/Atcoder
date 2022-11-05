#include<bits/stdc++.h>

using namespace std;




int main() {
	long long h,w;
	cin >> h >> w;
	char a[h][w];
	for(long long i=0;i<h;i++){
		for(long long k=0;k<w;k++) cin >> a[i][k];
	}for(long long i=0;i<w;i++){
		long long cnt=0;
		for(long long k=0;k<h;k++){
			if(a[k][i]=='#') cnt++;
		}cout << cnt << " " ;
	}
	
}

