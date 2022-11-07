// cach 1 : dung vector 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> chk(n, vector<bool>(n, false)); // tao vector 2 chieu 
    for(int i = 0; i < m; i++) {
        int k;
        cin >> k;
        vector<int> a(k);
        for(auto &v : a) cin >> v, --v;
        for(int j = 0; j < (int)a.size() - 1; j++) {
            for(int k = j + 1; k < (int)a.size(); k++) {
                chk[a[j]][a[k]] = true;
            }
        }
    }
    bool ans = 1;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            ans &= chk[i][j];
        }
    }
    cout << (ans ? "Yes" : "No") << endl;
}

// cach 2 : dung mang, may cham sai test 2 vi du, code chay tren dev c dung
/* #include <bits/stdc++.h>
using namespace std;

int main() {
   long long n,m,ok=1;
   cin >> n >> m;
   long long check[n][n]={0};
   for(long long i=0;i<m;i++){
		long long k;
		cin >> k;
		long long a[k];
		for(long long m=0;m<k;m++) {
			cin >> a[m];
			a[m]--;
		}
		for(long long l=0;l<k;l++){
			for(long long j=l+1;j<k;j++) check[a[l]-1][a[j]-1]=1;
		}
   }for(long long i = 0;i<n;i++){
   		for(long long k =i+1;k<n;k++) {
   			if(check[i][k]==0){
   				ok=0;	
			}	
		}
   }if(ok) cout << "Yes"<<endl ;
   else cout << "No" <<endl;   
} */

// dung mot mang 2 chieu de luu su xuat hien cua 2 nguoi mot trong cung bua tiec

