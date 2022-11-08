#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  double avg;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    avg += a[i];
  }
  avg /= n;
  int avg_ceil = ceil(avg), avg_floor = floor(avg);// ceil la lam tron len, floor la lam tron xuong  
  int ans_c = 0, ans_f = 0;
  for (int x : a) {
    ans_c += pow(avg_ceil - x, 2);
    ans_f += pow(avg_floor - x, 2);
  }
  
  cout << min(ans_c, ans_f) << endl;
  return 0;
}
// tim trung binh lam tron len va trung binh lam tron xuong,bien doi 2 cai, xong so sanh cai nao se mat it chi phi hon thi chon
