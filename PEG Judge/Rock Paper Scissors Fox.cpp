/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Feb 26/17, 1:43:25 am BDT

Problems Link: https://wcipeg.com/problem/acmtryouts1a

*/
#include<iostream>
#include<map>
using namespace std;
map<string, string> m{
    {"Paper",    "Scissors"},
    {"Rock",     "Paper"},
    {"Scissors", "Rock"},
    {"Fox",      "Foxen"}
};
int main(){
int n;
cin>>n;
  for(string s;cin>>s&&s!="Foxen";){
    cout<<m.at(s)<<endl;
  }
}