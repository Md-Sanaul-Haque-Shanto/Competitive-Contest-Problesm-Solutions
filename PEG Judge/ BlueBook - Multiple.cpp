/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 1:46:24 am BDT

Problems Link: https://wcipeg.com/problem/p79ex5

*/
#include<iostream>
#include<map>
using namespace std;
inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main(){
    use_io_optimizations();
int a,b;
cin>>a>>b;
cout<<((a%b==0)? "yes": "no")<<endl;
}

