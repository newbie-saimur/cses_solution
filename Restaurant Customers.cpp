#include <bits/stdc++.h>
using namespace std;
#define int      long long
int _;

void solve() {
	int n, m; cin >> n >> m;
	multiset<int, greater<int>> st;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		st.insert(x);
	}
	for (int i = 0; i < m; i++) {
		int x; cin >> x;
		auto it = st.lower_bound(x);
		if (it != st.end()) {
			cout << *it << '\n';
			st.erase(it);
		}
		else cout << -1 << '\n';
	}
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	// cin >> test;
	for (_ = 1; _ <= test; _++) {
		solve();
	}
	return 0;
}
