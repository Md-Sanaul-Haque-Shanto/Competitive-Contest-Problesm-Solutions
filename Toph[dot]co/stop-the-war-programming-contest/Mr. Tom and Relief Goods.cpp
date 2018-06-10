#include<bits/stdc++.h>
#define all(a)      (a).begin(),(a).end()
using namespace std;
long long int x, z , a;
int t[59];
stack<int> q;
/*Chana Can Solve*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    cout.tie();
 
    
    cin >> x;
    while(x--)
    {
        cin >> z >> a;
        if(z==1)
        {
            q.push(a);
            t[a]++;
        }
        else
        {
            int rslt=0;
            
            if(t[a]==0) {cout << "Sorry" <<endl;continue;}
            while(q.top()!=a) 
            {
                t[q.top()]--;
                q.pop();
                rslt++;
            }
            t[q.top()]--;
            q.pop();
            cout << rslt+1 <<endl;
        }
    }
    return 0;
}