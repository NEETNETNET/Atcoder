#include <bits/stdc++.h>
using namespace std;

int main() {
  long long k,s,cnt=0;
  cin >> k >> s;
  for(long long i=0;i<=k;i++){
  	for(long long j=0;j<=k;j++){
  		long long a=s-i-j;
  		if(a>=0&&a<=k) cnt++;
	  }
  }cout << cnt ;
}
