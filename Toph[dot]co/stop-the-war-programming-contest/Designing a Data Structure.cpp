#include <bits/stdc++.h>
#define lli long long int
#define pii pair<int, int>
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
using namespace std;

bool arrays[100009];
deque<pii> q;
priority_queue<pii> pqpi, pqpi2;
int n, arvv;
string s, s2;
/*Chana Can Solve*/
int main()
{
    
   
    cin >> n;

    while(n--)
    {
         cin >> s;
         cin >>s2;
         s = s+s2;
         if(s[0]=='I' && s[s.size()-1]=='t')
         {
             cin >> arvv;
             arrays[n]=1;
             q.pf(pii(arvv, n));
             pqpi.push(pii(-arvv, n));
             pqpi2.push(pii(arvv, n));
         }
         if(s[0]=='I'&&s[s.size()-1]=='k')
         {
            cin >> arvv;
            arrays[n]=1;
             q.pb(pii(arvv, n));
             pqpi.push(pii(-arvv, n));
             pqpi2.push(pii(arvv, n));
         }
         if(s[0]=='E' && s[s.size()-1]=='t')
         {
            arrays[q[0].second]=0;
            q.ppf();
         }
         if(s[0]=='E' && s[s.size()-1]=='k')
         {
            arrays[q[q.size()-1].second]=0;
            q.pop_back();
         }
         if(s[0]=='G' && s[s.size()-1]=='t')
         {
             cout << q[0].first <<endl;
         }
         if(s[0]=='G' && s[s.size()-1]=='k')
         {
             cout << q[q.size()-1].first <<endl;
         }
         if(s[0]=='G' && s[s.size()-1]=='x')
         {
             while(!arrays[pqpi2.top().second]) pqpi2.pop();
             cout << pqpi2.top().first <<endl;   
         }
         if(s[0]=='G' && s[s.size()-1]=='n')
         {
             while(!arrays[pqpi.top().second]) pqpi.pop();
             cout << -pqpi.top().first <<endl;
         }
    }
    return 0;
}