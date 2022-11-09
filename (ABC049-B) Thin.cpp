//cach 1
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long h,w;
    cin >> h >> w;
    char a[2*h][w];
    
    for(long long i=0;i<2*h;i++){
    	if(i%2==0){
    		for(long long k=0;k<w;k++) cin >> a[i][k];
		}else {
			for(long long k=0;k<w;k++) a[i][k]=a[i-1][k];
		}
    }
	for(long long i=0;i<2*h;i++){
    	for(long long k=0;k<w;k++) {
			cout << a[i][k] ;
		}cout << endl;
		
	}
}

// cach 2 ngan gon hon bang C 
/* #include <stdio.h>
int main()
{
	int h,w,i;
	char s[250][250];
	scanf("%d %d",&h,&w);
	getchar();
	for(i=0;i<h;i++)
	{
		scanf("%s",s[i]);
	}
	for(i=0;i<h;i++)
	{
		printf("%s\n",s[i]);
		printf("%s\n",s[i]);
	}
	return 0;
}*/
