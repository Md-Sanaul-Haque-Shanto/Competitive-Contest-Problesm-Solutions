#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
long long t;
  cin >> t;
  long long curCycleLen = 3;
  while (t >= curCycleLen) {
    t -= curCycleLen;
    curCycleLen *= 2;
  }
  if (t == 0) {
    cout << 1 << endl;
  } else {
    cout << curCycleLen - t + 1 << endl;
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
