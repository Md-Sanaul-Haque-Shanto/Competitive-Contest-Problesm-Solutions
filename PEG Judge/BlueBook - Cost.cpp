/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Jan 11/17, 12:54:02 am BDT
	
	
Problems Link: https://wcipeg.com/problem/p108ex7

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

int t;
cin>>t;
while(t--)
{
    int weight;
    cin>>weight;
    if (weight <= 30)
        {
            cout << 38;
        }
        else if (weight <= 50)
        {
            cout << 55;
        }
        else if (weight <= 100)
        {
            cout << 73;
        }
        else
        {
            cout << 73 + (weight - 100 + 49) / 50 * 24;
        }

        cout << '\n';

}
}