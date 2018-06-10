/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date :  Feb 17/17, 11:41:56 pm BDT
	
Problems Link: https://wcipeg.com/problem/coi06p1

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
long long n,x,t,c=0;
stack<long long>s;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    if(s.size()==0){
        s.push(x);
    }
    else {
        t=s.top();
        if(s.top()<=x) c+=s.size();
        else
            c++;
        while(t<x){
            s.pop();
            if(s.empty()) break;
            t=s.top();
        }
        s.push(x);
    }
}
cout<<c<<endl;
}