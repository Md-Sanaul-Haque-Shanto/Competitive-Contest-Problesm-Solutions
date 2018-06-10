/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 2:24:22 am BDT

Problems Link: https://wcipeg.com/problem/p171ex6a

*/
#include<bits/stdc++.h>
using namespace std;
inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main(){
    use_io_optimizations();
    cout<<fixed<<setprecision(4);
int n;
cin>>n;
double a,b{-1e6};
while(n--){
      cin>>a;
      b=max(b,a);
}
cout<<b<<endl;
}
