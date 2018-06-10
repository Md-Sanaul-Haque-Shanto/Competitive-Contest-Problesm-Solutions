/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date :  Feb 22/17, 10:51:39 pm BDT
	
Problems Link: https://wcipeg.com/problem/ioi1102

*/
#include<bits/stdc++.h>
using namespace std;
int main(){

int n,k,x,sum=0,mx=0;
deque<int>d;
cin>>n>>k;
for(int i=0;i<n;i++){
    cin>>x;
    sum+=x;
    d.push_back(x);
    while(d.size()>k){
        sum-=d.front();
        d.pop_front();
    }
    mx=max(mx,sum);
}
cout<<mx<<endl;
}