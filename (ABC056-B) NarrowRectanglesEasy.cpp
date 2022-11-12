#include<bits/stdc++.h>
using namespace std; 


int main(){ 
	long long w,a,b;
	cin >> w >> a >> b;
	if((a+w>=b&&a<=b)||(b+w>=a&&b<=a)) cout << 0;
	else if(a+w<b) cout << b-a-w;
	else if(b+w<a) cout << a-b-w;
}
