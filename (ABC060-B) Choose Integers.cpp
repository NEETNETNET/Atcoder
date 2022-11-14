#include<bits/stdc++.h>
using namespace std;


int main(){
	int f[200]={0};
	long long a,b,c;
	cin >> a >> b >> c;
	long long i=1;
	while(1){
		if(f[a*i%b]==1) break;
		f[a*i%b]=1;
		if(a*i%b==c){
			cout << "YES";
			return 0;
		}
		i++;
	}
	cout << "NO";
	return 0;
}

// quay lai so du cu thi break
