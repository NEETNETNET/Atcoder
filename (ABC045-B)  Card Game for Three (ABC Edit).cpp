#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string a,b,c;
    cin >> a >> b >>c;
    long i=1,j=0,k=0;
    char card=a[0];
    while(1){
    	if(card=='a'){
    		if(i==a.length()){
    			cout << "A";
    			break;
			}
    		card=a[i];
			i++;
		}
		else if(card=='b'){
    		if(j==b.length()){
    			cout << "B";
    			break;
			}
    		card=b[j];
			j++;
		}
		else if(card=='c'){
    		if(k==c.length()){
    			cout << "C";
    			break;
			}
    		card=c[k];
			k++;
		}
	}
}

