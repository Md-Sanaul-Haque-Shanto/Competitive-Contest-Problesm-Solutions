/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 1:55:46 am BDT

Problems Link: https://wcipeg.com/problem/p124ex5

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
int n,c;
double a,b{1000};
cin>>n;
while(n--){
    cin>>a>>c;
   cout<<pow(a,c)<<endl;
}
}
