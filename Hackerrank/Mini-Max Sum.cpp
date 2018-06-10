#include<bits/stdc++.h>
using namespace std;
int main(){
cin.tie(0);
ios_base::sync_with_stdio(0);
long long n=5,sum=0;
vector<long long>v(n);
for(long long i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
}
long long low=*min_element(v.begin(),v.end());
long long high=*max_element(v.begin(),v.end());
cout<<sum-high<<" "<<sum-low<<endl;



}