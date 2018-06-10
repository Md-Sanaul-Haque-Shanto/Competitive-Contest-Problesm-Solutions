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

#define lc (node<<1)
#define rc (lc | 1)
#define mid ((b+e)>>1)

const int maxn = 500010;

vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293};
bitset<62> bit[maxn], ft[maxn], T[4*maxn];
int a[maxn], n, m;

/*void update(int pos, bitset<62> val) {
	for( ; pos <= n; pos += pos & -pos) ft[pos] ^= val;
}

bitset<62> query(int pos) {
	bitset<62> ret(0);
	for( ; pos > 0; pos -= pos & -pos) ret ^= ft[pos];
	return ret;
}

bitset<62> query(int l, int r) {
	return query(r) ^ query(l-1);
}*/

bitset<62> PPF(int n) {
	bitset<62> ret(0);
	for(int i=0; i<primes.size(); i++) {
		int c = 0;
		while(n % primes[i] == 0) {
			c++; n /= primes[i];
		}
		if(c & 1) ret[i] = 1;
	} return ret;
}

void build(int node, int b, int e) {
	if(b==e) { T[node] = bit[b]; return ; }
	build(lc, b, mid); build(rc, mid+1, e);
	T[node] = T[lc] ^ T[rc];
}

void update(int node, int b, int e, int pos, bitset<62> val) {
	if(b > pos or e < pos) return ;
	if(b == e) { T[node] = val; return ; }
	update(lc, b, mid, pos, val); update(rc, mid+1, e, pos, val);
	T[node] = T[lc] ^ T[rc];
}

bitset<62> query(int node, int b, int e, int i, int j) {
	if(b > j or e < i) return bitset<62>(0);
	if(i <= b and e <= j) return T[node];
	return query(lc, b, mid, i, j) ^ query(rc, mid+1, e, i, j);
}

int32_t main() {
	//readfile("input.in");
	//cout<<primes.size()<<endl;
	int t; cin>>t;
	while(t--) {
		cin>>n>>m;
		for(int i=1; i<=n; i++) cin>>a[i];
		bit[0] = 0; for(int i=1; i<=n; i++) bit[i] = PPF(a[i]);
		build(1,1,n);
		//for(int i=1; i<=n; i++) update(i, bit[i]);
		for(int i=1; i<=m; i++) {
			int op, l, r;
			cin>>op>>l>>r;
			if(op == 1) {
				update(1,1,n,l,PPF(r));
			}
			else {
				bitset<62> ret = query(1,1,n,l, r);
				int temp = 0;
				for(int i=0; i<primes.size(); i++) {
					if(ret[i]) temp += primes[i];
				}
				cout<<temp<<endl;
			}
		}
		for(int i=1; i<=n; i++) bit[i] = 0, ft[i] = 0;
	}
}