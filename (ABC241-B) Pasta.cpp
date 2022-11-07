// cach 1
#include <bits/stdc++.h>
using namespace std;

int main() {
   long n,m;
   cin >> n >> m;
   long a[n],b[m],c[n]={0};
   for(long &x : a)  cin >> x;
	for(long &x : b) cin >> x;
   for(long i=0;i<m;i++){
   		long ok=1;
		for(long k=0;k<n;k++) {
			if(b[i]==a[k]&&c[k]==0) {
				c[k]=1;
				ok=0;
				break;
			} 
		}if(ok) {
			cout << "No";
			return 0;
		}
   }cout << "Yes";
} // chi nen dung return 0 khi khong co so bo test 

// cach 2 : dung map
/* #include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	map<int, int>mp;
	int x;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x;
		mp[x]++;
	}
	for (int i = 0; i < m; i++) {
		cin >> x;
		if (mp[x] == 0) {
			cout << "No" << endl;
			return 0;
		}
		mp[x]--;
	}
	cout << "Yes" << endl;
	return 0;
} */


