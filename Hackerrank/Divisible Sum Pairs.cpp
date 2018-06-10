#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
int n,k,c=0;
cin>>n>>k;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int b=0;b<n;b++){
    for(int j=b+1;j<n;j++){
        if((a[b]+a[j])%k==0){
            c++;
        }
    }
}
cout<<c<<endl;
}