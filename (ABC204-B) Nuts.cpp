#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	int sum=0;
	for(int &x : a) {
		cin >> x;
		if(x>10) sum+=(x-10);
	}cout << sum << endl;
	
	
}
