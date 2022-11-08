#include<bits/stdc++.h>

using namespace std;
int main(){
	int n,l;
	cin >> n >> l;
	string a[n];
	for(string &x : a) cin >> x;
	sort(a,a+n);
	for(string x : a) cout << x;
}

