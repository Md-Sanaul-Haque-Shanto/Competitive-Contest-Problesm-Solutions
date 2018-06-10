/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 1:50:44 am BDT

Problems Link: https://wcipeg.com/problem/p287ex3

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
    cout << fixed << setprecision(2);
int n;
double a,b{1000};
cin>>n;
while(n--){
    cin>>a;
    b=min(b,a);
}
cout<<b<<endl;
}
