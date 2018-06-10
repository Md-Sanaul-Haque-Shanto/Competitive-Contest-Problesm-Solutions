#include<iostream>
using namespace std;
int main()
{
int t,i;
cin>>t;
for(i=1;i<=t;i++)
{
int m,n,p;
cin>>m>>n>>p;
int s=n*p;
int y=s/100;
cout<<"Case "<<i<<": ";
if (y<=m)
{
cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
}

return 0;
}