//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[12][12];
//vector<pair<int, int>> v;
//
//bool check(int x, int y, int k) {
//	for (int i = 1; i <= 9; i++) {
//		if (arr[x][i] == k)return 0;
//		if (arr[i][y] == k)return 0;
//	}
//	int xx = (x - 1) / 3, yy = (y - 1) / 3;
//	xx *= 3, yy *= 3;
//	xx++, yy++;
//	for (int i = xx; i <= xx + 2; i++) {
//		for (int j = yy; j <= yy + 2; j++) {
//			if (arr[i][j] == k)return 0;
//		}
//	}
//	return 1;
//}
//
//void print() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			cout << arr[i][j];
//		}
//		cout << '\n';
//	}
//}
//
//void dfs(int n) {
//	if (n == v.size()) {
//		print();
//		exit(0);
//	}
//	for (int i = 1; i <= 9; i++) {
//		if (check(v[n].first, v[n].second, i)) {
//			arr[v[n].first][v[n].second] = i;
//			dfs(n + 1);
//		}
//	}
//	arr[v[n].first][v[n].second] = 0;
//	return;
//}
//
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			scanf("%1d", &arr[i][j]);
//			if (arr[i][j] == 0)
//				v.push_back({ i,j });
//		}
//	}
//
//	dfs(0);
//}