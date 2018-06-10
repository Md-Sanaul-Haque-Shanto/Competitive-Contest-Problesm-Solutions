/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 11:37:31 pm BDT

Problems Link: https://wcipeg.com/problem/coci063p1

*/

#include<iostream>

using namespace std;
int main(){
   // freopen("input.txt","r",stdin);
int n[9];
int sum=0;
for(int i=0;i<9;i++){
    cin>>n[i];
    sum+=n[i];
}

for(int i=0;i<8;i++)
    for(int j=i+1;j<9;j++)
    if(sum-n[i]-n[j]==100)
for(int k=0;k<9;k++){
    if(k!=i && k!=j) cout<<n[k]<<endl;
}
}