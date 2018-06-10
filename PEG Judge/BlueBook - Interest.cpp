/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 2:33:33 am BDT

Problems Link: https://wcipeg.com/problem/P124EX3

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

    double mony;
    double interest;
int years;
cin>>mony>>interest>>years;
for(int i=0;i<=years;i++){
    cout<<i<<" "<<mony<<endl;
    mony+=mony*(interest/100);
}

}