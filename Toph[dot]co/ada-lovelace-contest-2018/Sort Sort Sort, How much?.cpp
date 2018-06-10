#include "bits/stdc++.h"
using namespace std;

typedef long long int LL;
const int N = 100005;
const LL MOD = 1e9+7;

LL k[10*N],wow[N];
map<LL,LL> M;

void fun(){

    wow[0] = 1%MOD;

    for( LL i = 1; i <= 100000; i++ ) {
    
        wow[i] = (wow[i-1]%MOD*i%MOD)%MOD;
    }
}
int main() {
    fun();
    int t;

    cin >> t;
    
    while( t-- ) {
        LL n;
        cin >> n;
        for( int i = 1; i <= n; i++ ) {
            cin >>k[i];
            M[k[i] ]++;
        }
        
        LL rsl = 1;
        
        for( auto x : M ) {
            if( x.second > 1 ) {
                rsl = (rsl%MOD*wow[x.second]%MOD)%MOD;
            }
        }
 
        cout <<rsl%MOD << endl;
        M.clear();
    }

    return 0;
}
