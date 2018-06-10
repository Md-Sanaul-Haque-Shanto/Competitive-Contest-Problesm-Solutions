#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a;
vector<int>v;
for(int i=0;i<a;i++){
    cin>>b;
    v.push_back(b);
}
int q1,q2,q3;
cin>>q1;
cin>>q2>>q3;
v.erase(v.begin()+(q1-1));
v.erase(v.begin()+(q2-1),v.begin()+(q3-1));
cout<<v.size()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}


}
