#include<bits/stdc++.h>
using namespace std;
long long Mod= 998244353;
int main(){
	long long n;
	cin >> n;
	n%=Mod;
	if(n<0) n+=Mod;
	cout << n;
}
