/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Jan 12/17, 12:58:14 am BDT
	
Problems Link: https://wcipeg.com/problem/wc97p4

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s{"abcdefghijklmnopqrstuvwxyz"};
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string x;
        getline(cin,x);
        sort(x.begin(),x.end());
        cout<<(x==s ? "OK.":"Nope.")<<endl;
    }


}