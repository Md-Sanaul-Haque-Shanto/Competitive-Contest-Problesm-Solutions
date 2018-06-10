/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 28/17, 10:57:18 pm BDT

Problems Link: https://wcipeg.com/problem/p171ex6a

*/
#include<bits/stdc++.h>
using namespace std;
double a;
priority_queue<double>q;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    cin>>a;
    q.push(a);
}
cout<<fixed<<setprecision(4);
cout<<q.top()<<endl;
}