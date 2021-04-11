//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, h;
//int arr[35][15];
//
//void print() {
//	cout << endl;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//bool check() {
//	for (int j = 1; j <= m; j++) {
//		int y = j;
//		for (int i = 1; i <= n; i++) {
//			if (arr[i][y] == 1) {
//				y++;
//			}
//			else if (arr[i][y - 1] == 1) {
//				y--;
//			}
//		}
//		if (y != j)return 0;
//	}
//	return 1;
//}
//void dfs1(int x, int y, int cnt) {
//	if (cnt == 1) {
//		if (!check()) {
//			return;
//		}
//		else {
//			cout << 1;
//			exit(0);
//		}
//		return;
//	}
//	for (int i = x; i <= n; i++) {
//		for (int j = 1; j < m; j++) {
//			if (arr[i][j] == 0 && arr[i][j - 1] == 0 && arr[i][j + 1] == 0) {
//				arr[i][j] = 1;
//				dfs1(i, j + 1, cnt + 1);
//				arr[i][j] = 0;
//			}
//		}
//	}
//}
//void dfs2(int x, int y, int cnt) {
//	if (cnt == 2) {
//		if (!check()) {
//			return;
//		}
//		else {
//			cout << 2;
//			exit(0);
//		}
//		return;
//	}
//	for (int i = x; i <= n; i++) {
//		for (int j = 1; j < m; j++) {
//			if (arr[i][j] == 0 && arr[i][j - 1] == 0 && arr[i][j + 1] == 0) {
//				arr[i][j] = 1;
//				dfs2(i, j, cnt + 1);
//				arr[i][j] = 0;
//			}
//		}
//	}
//}
//void dfs3(int x, int y, int cnt) {
//	if (cnt == 3) {
//		if (!check()) {
//			return;
//		}
//		else {
//			cout << 3;
//			exit(0);
//		}
//		return;
//	}
//	for (int i = x; i <= n; i++) {
//		for (int j = 1; j < m; j++) {
//			if (arr[i][j] == 0 && arr[i][j - 1] == 0 && arr[i][j + 1] == 0) {
//				arr[i][j] = 1;
//				dfs3(i, j + 1, cnt + 1);
//				arr[i][j] = 0;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> m >> h >> n;
//	for (int i = 0; i < h; i++) {
//		int a, b;
//		cin >> a >> b;
//		arr[a][b] = 1;
//	}
//	//print();
//	if (check()) { cout << 0; return 0; }
//	dfs1(1, 1, 0);
//	dfs2(1, 1, 0);
//	dfs3(1, 1, 0);
//	cout << -1;
//}