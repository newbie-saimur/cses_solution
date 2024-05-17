#include <bits/stdc++.h>
using namespace std;
#define int      long long
int _;

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		v.push_back({x, 1});
		v.push_back({y, -1});
	}
	sort(v.begin(), v.end());
	int ans = 0, sum = 0;
	for (auto &[x, y] : v) {
		sum += y;
		ans = max(ans, sum);
	}
	cout << ans << '\n';
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
