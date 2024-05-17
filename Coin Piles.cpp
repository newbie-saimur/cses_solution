#include <bits/stdc++.h>
using namespace std;
#define int      long long
int _;

void solve()
{
	int a, b; cin >> a >> b;
	if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a)
		cout << "YES\n";
	else cout << "NO\n";
}

int32_t main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int test = 1;
	cin >> test;
	for (_ = 1; _ <= test; _++)
	{
		solve();
	}
	return 0;
}
