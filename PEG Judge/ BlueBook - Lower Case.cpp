/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 2:28:37 am BDT

Problems Link: https://wcipeg.com/problem/p299ex3

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
int n;
cin>>n;
while(n--){
      string s;
      cin>>s;
      transform(s.begin(),s.end(),s.begin(),::tolower);
      cout<<s<<endl;
}

}