/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 1:59:18 am BDT

Problems Link: https://wcipeg.com/problem/p129ex3

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

int a,b=0;
cin>>a;
while((1<<b)<a){
    b++;
}
cout<<b<<endl;
}