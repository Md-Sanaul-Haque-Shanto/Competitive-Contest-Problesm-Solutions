/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 25/17, 11:20:20 pm BDT

Problems Link: https://wcipeg.com/problem/coci075p1

*/
#include<bits/stdc++.h>
using namespace std;
char solve(int a,int b, int c)
{
    return a+b==c ? '+': a-b==c ? '-': a*b==c ? '*' : a==b*c ? '/':'\0';
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(solve(a,b,c)) cout<<a<<solve(a,b,c)<<b<<'='<<c<<endl;
    else
        cout<<a<<'='<<b<<solve(b,c,a)<<c<<endl;

}
