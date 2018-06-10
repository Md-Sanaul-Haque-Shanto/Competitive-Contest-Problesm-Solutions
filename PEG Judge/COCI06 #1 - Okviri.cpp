/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 25/17, 11:57:40 pm BDT

Problems Link: https://wcipeg.com/problem/coci061p3

*/
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if((i+1)%3!=0) cout<<"..#.";
    else cout<<"..*.";
}
cout<<"."<<endl;
for(int i=0;i<s.length();i++){
    if((i+1)%3!=0) cout<<".#.#";
    else cout<<".*.*";
}
cout<<"."<<endl;
for(int i=0;i<s.length();i++){
    if((i+1)%3!=0){
        if(i%3==0 &&i!=0 ) cout<<"*."<<s[i]<<".";
        else cout<<"#."<<s[i]<<".";
    }
    else cout<<"*."<<s[i]<<".";
}
if(s.length()%3) cout<<"#";
else cout<<"*";
cout<<endl;

for(int i=0;i<s.length();i++){
    if((i+1)%3!=0) cout<<".#.#";
    else cout<<".*.*";
}
cout<<"."<<endl;
for(int i=0;i<s.length();i++){
    if((i+1)%3!=0) cout<<"..#.";
    else cout<<"..*.";
}
cout<<"."<<endl;
}
