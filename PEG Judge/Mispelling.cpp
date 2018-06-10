/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Jan 11/17, 12:47:54 am BDT
	
	
Problems Link: https://wcipeg.com/problem/a1

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
for(int test{1};test<=t;test++ )
{
    int n;
    cin>>n;
    cin.ignore();
    string s;

  getline(cin,s);
    s.erase(n-1,1);

    cout<<test<<" "<<s<<endl;

}
}