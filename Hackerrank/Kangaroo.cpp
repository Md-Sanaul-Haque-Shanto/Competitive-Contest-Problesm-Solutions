#include<bits/stdc++.h>
using namespace std;

int main(){
// freopen("input.txt","r",stdin);
cin.tie(0);
ios_base::sync_with_stdio(0);
int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(v2 >= v1) {
        cout<<"NO";
    } else if((x2-x1)%(v1-v2) == 0) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}