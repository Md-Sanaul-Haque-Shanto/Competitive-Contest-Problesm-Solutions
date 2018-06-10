/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 2:14:27 am BDT

Problems Link: https://wcipeg.com/problem/p124ex4

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
unsigned int from,to;
 double populations,rate;
cin>>rate>>from>>populations>>to;
for(unsigned int i=from;i<to;i++){
    populations+=populations*(rate/100);
}
cout<<llround(populations)<<endl;
}
