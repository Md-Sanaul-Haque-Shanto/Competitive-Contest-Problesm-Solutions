#include "bits/stdc++.h"
using namespace std;

typedef long long int LL;
const int N = 100005;
const int MOD = 1e9+7;
int main(){
int t;
cin>>t;
 for( int c = 1;c <= t;c++ ) { 
    LL l , r;
  cin>>l>>r;
   LL ans = (r-l+2-(l%2))/2; 
  if( l == 1 ) ans++; 
  cout << ans <<endl; 
  } 
  
  return 0;
 
  } 