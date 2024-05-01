#include <bits/stdc++.h>
using namespace std;
#define int      long long
int _;
const int N = 1005;
vector<string>g(N);
bool visited[N][N];
int n, m;

vector<pair<int, int>> moves = {
    {0, 1}, {0, -1}, { -1, 0}, {1, 0}
};

bool isValid(int i, int j) {
    return i >= 0 and j >= 0 and i < n and j < m and !visited[i][j] and g[i][j] == '.';
}

void dfs(int i, int j) {
    visited[i][j] = 1;
    for (auto [x, y] : moves) {
        if (isValid(i + x, j + y)) dfs(i + x, j + y);
    }
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> g[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (g[i][j] == '.' && !visited[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
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
