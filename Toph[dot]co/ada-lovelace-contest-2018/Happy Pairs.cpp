#include "bits/stdc++.h"
using namespace std;

typedef long long int LL;
const int N = 100005;
const int MOD = 1e9+7;

LL ara[N];
map <LL,LL> M;

int main() {
    int t;
     cin>>t;
    for( int c = 1;c <= t;c++) {
            LL n,k,ans=0,z=0;
         cin>>n>>k;
        for( int i = 1; i <= n; i++ ) {
            cin>>ara[i];
            ara[i] %= k;
            M[ ara[i] ]++;
        }
        for( int i = 1; i <= n; i++ ) {
           if( ara[i] ==0) {
             z++;
             continue;
           }
           LL ace = ara[i];
           LL pro= k-ara[i];
           M[ace]--;
           ans += M[pro];
        }
        ans += (z*(z-1)/2);
        cout<<ans<<endl;
        M.clear();
    }
        
    return 0;
}