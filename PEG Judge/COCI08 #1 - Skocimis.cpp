/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Jan 12/17, 12:18:12 am BDT
	
Problems Link: https://wcipeg.com/problem/coci081p1

*/
#include <algorithm>
#include <iostream>

using namespace std;

inline
void use_io_optimizations()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    use_io_optimizations();

    unsigned int a;
    unsigned int b;
    unsigned int c;

    cin >> a >> b >> c;

    cout << max(b - a, c - b) - 1 << '\n';

    return 0;
}