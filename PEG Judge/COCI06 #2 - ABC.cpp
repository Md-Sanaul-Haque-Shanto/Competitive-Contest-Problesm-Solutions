/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 25/17, 11:16:06 pm BDT

Problems Link: https://wcipeg.com/problem/coci062p2

*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
vector<int>v;
int n;
for(int i=0;i<3;i++){
    cin>>n;
    v.push_back(n);
}
sort(v.begin(),v.end());
char c[3];
cin>>c;
for(int i=0;i<v.size();i++){
    cout<<v[c[i]-'A']<<" ";
}
cout<<endl;
}