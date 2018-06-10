/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date : Jan 11/17, 11:23:05 pm BDT
	
Problems Link: https://wcipeg.com/problem/coci061p1

*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main()
{


    vector<bool> is_remainder(42);

    for (unsigned int i {0}; i < 10; ++i)
    {
        unsigned int number;
        cin >> number;

        is_remainder[number % 42] = true;
    }

    cout << count(is_remainder.begin(), is_remainder.end(), true) << '\n';

    return 0;
}