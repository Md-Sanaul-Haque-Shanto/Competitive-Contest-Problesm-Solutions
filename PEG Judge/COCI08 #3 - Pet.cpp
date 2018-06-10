/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Jan 12/17, 12:42:52 am BDT
	
Problems Link: https://wcipeg.com/problem/coci083p1

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s{0},w{0};
    for(int i=1;i<=5;i++)
    {   int m{0};
        for(int j=1;j<=4;j++)
        {
            int n;
            cin>>n;
            m+=n;
        }
        if(m>s){
        w=i;
        s=m;
        }

    }
    cout<<w<<' '<<s<<endl;


}