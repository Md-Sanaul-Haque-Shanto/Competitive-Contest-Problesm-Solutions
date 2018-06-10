/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Mar 01/17, 1:02:48 am BDT

Problems Link: https://wcipeg.com/problem/coci064p3

*/
#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
    {
        return b==0?a:gcd(b,a%b);
    }
int main(){
int n,a,g;
vector<int>v;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a;
    if(i==0){
        v.push_back(a);
    }
    else{
        g=gcd(v[0],a);

    cout<<v[0]/g<<"/"<<a/g<<endl;
    }
}
return 0;

}
