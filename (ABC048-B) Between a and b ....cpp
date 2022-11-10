// cach 1
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a,b,x;
  cin>>a>>b>>x;
  if(a%x!=0) cout<<b/x-a/x;
  else cout<<(b/x-a/x)+1;

}

// cach 2 sai test 8 
/* #include <bits/stdc++.h>
using namespace std;

int main() {
  long long a,b,x;
  cin >> a >> b >> x;
  double k=a;
  k/=x;
  long long l=ceil(k);
  cout << (b/x)-l+1;
  
} */
