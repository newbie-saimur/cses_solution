#include <bits/stdc++.h>
using namespace std;
#define int      long long
int _;

void solve()
{
	int n, k; cin >> n >> k;
	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
	int cnt = 0;
	sort(a, a + n);
	for (int i = 0, j = n - 1; i <= j;) {
		if (a[i] + a[j] <= k) cnt++, i++, j--;
		else cnt++, j--;
	}
	cout << cnt << '\n';
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	// cin >> test;
	for (_ = 1; _ <= test; _++)
	{
		solve();
	}
	return 0;
}
