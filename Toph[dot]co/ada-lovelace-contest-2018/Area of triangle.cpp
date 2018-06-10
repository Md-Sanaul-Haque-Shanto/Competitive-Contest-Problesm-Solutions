#include "bits/stdc++.h"
using namespace std;


int main() {
    int t;
    cin >> t;
    while( t-- ) {
        double x1 , y1 , x2 , y2 , x3 , y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double ans = 2*abs(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3);
        cout << setprecision(10) << fixed << ans <<endl;
    }
    return 0;
}
