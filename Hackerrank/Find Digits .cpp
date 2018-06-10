#include<bits/stdc++.h>
using namespace std;
int main(){
 //freopen("input.txt","r",stdin);
int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        int N;cin >> N;
        int tmp = N,cnt = 0;
        while(tmp!=0){
            int r = tmp % 10;
            if(r !=0 && N%r == 0)cnt++;
            tmp/=10;
        }
        cout << cnt << endl;
    }
    return 0;
}
