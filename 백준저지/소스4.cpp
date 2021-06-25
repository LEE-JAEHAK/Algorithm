#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10005][10005];
int cnt(int x, int y) {
	int minn = 1e9;
	for (int i = 0; i < n; i++) {
		if (arr[i][y] == 1) {
			minn = min(minn, abs(x - i));
		}
	}
	return minn;
}

int main() {
	int t;
	int idx = 1;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				scanf("%1d", &arr[i][j]);
			}
		}
		int minn = 1e9;
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 0) {
					sum += cnt(i, j);
				}
			}
			minn = min(minn, sum);
		}
		cout << "#" << idx << ' ' << minn << '\n';
		idx++;
	}
}