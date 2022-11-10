#include <bits/stdc++.h>
using namespace std;

int main() {
	long long w,h,n;
	cin >> w >> h >> n;
	long long x1=0,y1=0;
	for(long long i=0;i<n;i++){
		long long a,b,c;
		cin >> a >> b >> c;
		if(c==1){
			if(a>=x1&&a<=w) x1=a;
			else if(a>=w){
				x1=a;
				w=a;
			}
		}if(c==2){
			if(a>=x1&&a<=w) w=a;
			else if(a<=x1){
				x1=a;
				w=a;
			}
		}if(c==3){
			if(b>=y1&&b<=h) y1=b;
			else if(b>=h){
				y1=b;
				h=b;
			}
		}if(c==4){
			if(b>=y1&&b<=h) h=b;
			else if(b<=y1) {
				y1=b;
				h=b;
			}
		}
	}cout << (h-y1)*(w-x1);
}
