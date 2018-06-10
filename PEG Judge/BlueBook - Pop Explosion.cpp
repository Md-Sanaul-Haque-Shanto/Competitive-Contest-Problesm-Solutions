/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 2:52:17 am BDT

Problems Link: https://wcipeg.com/problem/p154ex6
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

double rate;
int cupo,tpo,year;
cin>>rate>>cupo>>year>>tpo;
for(double popo=cupo;popo<tpo;){
    popo+=popo*(rate/100);
    year++;
}
cout<<year<<endl;
}

