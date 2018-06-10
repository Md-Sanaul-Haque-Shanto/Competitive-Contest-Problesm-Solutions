#include <bits/stdc++.h>
using namespace std;
 
#define fasten(v) v.reserve(v.size())
#define wait() system("pause")
#define clock_starts() clock_t begin = clock()
#define clock_ends() clock_t end = clock()
#define print_running_time() double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC; \
printf("Elapsed Time : %.10f second(s)\n", elapsed_secs)
#define readfile(s) freopen(s, "r", stdin)
#define writefile(s) freopen(s, "w", stdout)
#define debug(s) cout<< #s <<" = "<< s <<endl
#define all(v) v.begin(), v.end()
#define cin_cout_is_cool ios_base::sync_with_stdio(false); cin.tie(NULL)
#define printBinary(n) cout << #n << " = " << bitset<64>(n) << endl
#define min_pq priority_queue<int, vector<int>, greater<int> >
#define MEMSET(a,val) memset(a, val, sizeof a)
#define PB push_back
#define endl '\n'
#define cin(n) scanf("%d", &n)
 
template<typename T>T max(T a_,T b_,T c_) { return max(a_,max(b_,c_)); }
template<typename T>T min(T a_,T b_,T c_) { return min(a_,min(b_,c_)); }

typedef pair<int, int> ii;
typedef pair<long, long> pll;
typedef pair<double, double> pdd;

#define ceil(num,d) 		( (int)(num/d) + (num%d>0 ? 1 : 0) )
#define block_no(idx) 		( ceil(idx, BLOCK_SIZE) )
#define block_starting(idx) ( ((block_no(idx)-1) * BLOCK_SIZE) +1 )
#define block_ending(idx) 	( min(n, block_no(idx)*BLOCK_SIZE) )
#define block_ranking(idx) 	( (idx % BLOCK_SIZE == 0) ? BLOCK_SIZE : idx % BLOCK_SIZE 

int cnt[100010];
string s;

bool cmp(int a, int b) {
	return s.substr(a, s.size()-a) < s.substr(b, s.size()-b);
}

int main() {
	//readfile("input.in");
	//string temp = "siam";
	//cout<<temp.substr(2, 4-2)<<endl;
	int t; cin>>t;
	while(t--) {
		cin>>s;
		set<char> st;
		for(int i=s.size()-1; i>=0; i--) {
			st.insert(s[i]); cnt[i] = st.size();
		}
		vector<int> v;
		for(int i=0; i<s.size(); i++) v.push_back(i);
		sort(v.begin(), v.end(), cmp);
		//for(int b : v) cout<<b<<' '; cout<<endl;
		int m; cin>>m;
		for(int i=1; i<=m; i++) {
			int k; cin>>k; k--;
			assert(v.size() > k and k >= 0);
			cout<<cnt[v[k]]<<endl;;
		}
	}
}