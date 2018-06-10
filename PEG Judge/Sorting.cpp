/* 
Bismillah Hir Rahmanir Rahim

Md Sanaul Haque Shanto
Email : mdsanaulhaqueshanto@gmail.com

Solution Date :  Jan 10/17, 11:47:44 pm BDT	
	
Problems Link: https://wcipeg.com/problem/a4b1

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

int number_count;
cin>>number_count;
vector<int>numbers(number_count);
for(auto& number : numbers)
{
    cin>>number;
}
sort(numbers.begin(),numbers.end());
for(auto number : numbers)
{
    cout<<number<<endl;
}
}