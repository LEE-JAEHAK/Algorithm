#include <bits/stdc++.h>
using namespace std;

int arr[505][505];

int main() {
	int n, m, b;
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}

	int minn = 1e9, p = b, memo=0;
	for (int k = 256; k >= 0; k--) {
		int time = 0, p = b;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (k < arr[i][j]) {
					time += 2 * (arr[i][j] - k);
					p += arr[i][j] - k;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (k > arr[i][j]) {
					if (p >= k - arr[i][j]) {
						time += k - arr[i][j];
						p -= k - arr[i][j];
					}
					else {
						goto a;
					}
				}
			}
		}
		if (minn > time) {
			minn = time;
			memo = k;
		}
	a:;
	}
	cout << minn << ' ' << memo;
}