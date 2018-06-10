#include"bits/stdc++.h"
using namespace std;
#define ll long long
ll a[100005];
ll playsum[400005][61];
void update1(int tit,int b,int e,int x,ll v)
{
    if(b==x && e==x)
    {
        for(ll i=0; i<=60; i++)
        {
            if((v&(1LL<<i)) == 0)playsum[tit][i]=0;
            else playsum[tit][i] = 1;
        }
        return;
    }

    int playf = 2*tit, playr=2*tit+1, sa = (b+e)/2;
    if(x<=sa)update1(playf,b,sa,x,v);
    else update1(playr,sa+1,e,x,v);

    for(int i=0; i<=60; i++){
        playsum[tit][i] = playsum[playf][i]+playsum[playr][i];
    }
}
int query(int tit,int b,int e,int x,int y,int k)
{
    if(b>y || e<x)return 0;
    if(b>=x && e<=y)return playsum[tit][k];
    int playf = 2*tit, playr=2*tit+1, sa = (b+e)/2;
    int play1 = query(playf,b,sa,x,y,k);
    int play2 = query(playr,sa+1,e,x,y,k);
    return play1+play2;
}

/*Chana Can Solve */
int main()
{
    int n; scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%lld",&a[i]);
        update1(1,1,n,i,a[i]);
    }
    int q; scanf("%d",&q);
    while(q--)
    {
        int t; scanf("%d",&t);
        if(t==1)
        {
            int x; ll v;
            scanf("%d %lld",&x,&v);
            a[x]=v;
            update1(1,1,n,x,v);
        }
        else
        {
            int x,y,k;
            scanf("%d%d%d",&x,&y,&k);
            if(x>y)swap(x,y);
            int ans = query(1,1,n,x,y,k);
            printf("%d\n",ans);
        }
    }
    return 0;
}