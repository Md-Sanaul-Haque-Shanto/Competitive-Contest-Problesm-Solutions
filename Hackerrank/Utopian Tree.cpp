#include<bits/stdc++.h>
using namespace std;
int tree(int n){
int h=1;
for(int i=1;i<=n;i++){
    if(i%2!=0)h*=2;
    if(i%2==0)h++;
}
return h;
}
int main(){
 //freopen("input.txt","r",stdin);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    cout<<tree(n)<<endl;
}

    return 0;
}