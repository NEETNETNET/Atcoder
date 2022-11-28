#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define fort(i,a,b) for(ll i=a;i<b;++i)
#define forg(i,a,b) for(ll i=a;i>=b;--i)

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int h,m;
    cin >> h >> m;
    while(1){
    	int a,b,c,d;
    	a=h/10;b=h%10;c=m/10;d=m%10;
    	swap(b,c);
    	if(a*10+b<=23&&c*10+d<=59) {
    		cout << h << " " << m;
    		return 0;
		}m++;
		if(m==60){
			m=0;
			h++;
		}if(h==24){
			h=0;
			m=0;
		}
	}
    
    
	
}

