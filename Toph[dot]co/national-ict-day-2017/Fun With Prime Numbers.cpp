#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<climits>
#include<string>
#include<vector>
#include<map>
#include<queue>
#include<set>
#include<algorithm>

#define ll long long
#define dl double
#define mod 1000000007
#define sz 1005
#define szz 1005

using namespace std;

set<ll>s;

ll fun(ll n)
{
    if(n%2==0)
    {
        while(n%2==0)
        {
            n=n/2;
            s.insert(2);

            if(s.size()>2)
                return 0;
        }
    }

    for(ll i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            s.insert(i);
            n=n/i;

            if(s.size()>2)
                return 0;
        }
    }

    if(n>2)
        s.insert(n);

    if(s.size()==2)
        return 1;

    else
        return 0;
}

int main()
{
    ll test,n;

    scanf("%lld",&test);

    while(test--)
    {
        scanf("%lld",&n);

        while(1)
        {
            s.clear();

            ll res=fun(n);

            if(res)
            {
                printf("%lld\n",n);
                break;
            }
            n++;
        }
    }

    return (0);
}

