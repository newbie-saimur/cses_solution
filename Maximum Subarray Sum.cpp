#include <bits/stdc++.h>
using namespace std;
#define int      long long
int _;

void solve() {
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int sum = a[0], ans = a[0];
	for (int i = 1; i < n; i++) {
		sum = max(sum + a[i], a[i]);
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
