/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Jan 10/17, 11:22:55 pm BDT	
	
Problems Link: https://wcipeg.com/problem/collatz

*/
#include<bits/stdc++.h>
using namespace std;


int main()

{

   unsigned int n,s{0};
   cin>>n;

   for(unsigned int i{n};i!=1;s++)
   {
       if(i%2==0)
        i/=2;
        else
    i=3*i+1;
   }

   cout<<s<<endl;
}
