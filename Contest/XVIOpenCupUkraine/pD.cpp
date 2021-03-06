#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define FZ(n) memset((n),0,sizeof(n))
#define FMO(n) memset((n),-1,sizeof(n))
#define F first
#define S second
#define PB push_back
#define ALL(x) begin(x),end(x)
#define SZ(x) ((int)(x).size())
#define IOS ios_base::sync_with_stdio(0); cin.tie(0)
#define REP(i,x) for (int i=0; i<(x); i++)
#define REP1(i,a,b) for (int i=(a); i<=(b); i++)
#ifdef ONLINE_JUDGE
#define FILEIO(name) \
    freopen(name".in", "r", stdin); \
    freopen(name".out", "w", stdout);
#else
#define FILEIO(name)
#endif
template<typename A, typename B>
ostream& operator <<(ostream &s, const pair<A,B> &p) {
    return s<<"("<<p.first<<","<<p.second<<")";
}
template<typename T>
ostream& operator <<(ostream &s, const vector<T> &c) {
    s<<"[ ";
    for (auto it : c) s << it << " ";
    s<<"]";
    return s;
}
// Let's Fight!


int N, K;
vector<int> ip;
const int MX = 1000000;
map<int, int> sm;

int main() {
	IOS;
	cin >> N >> K;
	ip.resize(N);
	for (int i=0; i<N; i++) {
		cin>>ip[i];
	}
	int M; cin >> M;
	int d = M / K;
	for (auto x: ip) {
		sm[x%d] ++;
	}

	for (auto x: sm) {
		if (x.S == K) {
			cout << 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;

	return 0;
}

