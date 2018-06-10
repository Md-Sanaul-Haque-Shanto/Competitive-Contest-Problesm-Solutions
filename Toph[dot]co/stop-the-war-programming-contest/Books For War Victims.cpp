#include<bits/stdc++.h>
#define all(a)      (a).begin(),(a).end()
using namespace std;
main()
{

    long int n;
    while(cin>>n){
long int a = n/3;
        if(n%3>0)a++;
        cout<<a<<endl;
    }
