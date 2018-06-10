/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 2:43:58 am BDT 

Problems Link: https://wcipeg.com/problem/p140ex3

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

string s;
cin>>s;
for(auto di=s.crbegin();di!=s.crend();di++){
    cout<<*di<<endl;
}

}
