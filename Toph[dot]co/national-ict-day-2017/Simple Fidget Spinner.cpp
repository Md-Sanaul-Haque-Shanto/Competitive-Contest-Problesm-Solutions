#include "bits/stdc++.h"
using namespace std;
const double pi = acos(-1);

double solve(double r, double a, double b) {
	double ans = 4 * pi * r * r + 3 * a * b;
	double ang = acos((2 * r * r - b * b) / (2 * r * r));
	ans -= 6 * ((r * r / 2.0) * ang - (r * r / 2.0) * sin(ang));
	return ans;
}

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--) {
		int r, a, b;
		cin >> r >> a >> b;
		cout.precision(2);
		cout << fixed << solve(r, a, b) << endl;
	}
	return 0;
}