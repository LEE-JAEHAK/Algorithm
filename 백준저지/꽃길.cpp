//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[12][12];
//int visited[12][12];
//
//bool check(int x, int y) {
//	if (0 > x || x >= n || 0 > y || y >= n)return 0;
//	if (visited[x][y] == 1)return 0;
//	return 1;
//}
//
//bool flower(int x, int y) {
//	if (check(x - 1, y) && check(x + 1, y) && check(x, y) && check(x, y - 1) && check(x, y + 1)) {
//		visited[x][y] = 1;
//		visited[x - 1][y] = 1;
//		visited[x + 1][y] = 1;
//		visited[x][y - 1] = 1;
//		visited[x][y + 1] = 1;
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//void reset() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			visited[i][j] = 0;
//		}
//	}
//}
//int sum() {
//	int ret = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (visited[i][j] == 1)ret += arr[i][j];
//		}
//	}
//	return ret;
//}
//
//vector<int> v;
//int visite[105];
//int num;
//int minn = 1e9;
//void dfs(int idx, int cnt) {
//	if (cnt == 3) {
//		reset();
//		for (auto i : v) {
//			int x = i / n;
//			int y = i % n;
//			if (!flower(x, y)) {
//				return;
//			}
//		}
//		minn = min(minn, sum());
//		return;
//	}
//	for (int i = idx; i < num; i++) {
//		if (visite[i] == 0) {
//			visite[i] = 1;
//			v.push_back(i);
//			dfs(i + 1, cnt + 1);
//			v.pop_back();
//			visite[i] = 0;
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	num = n * n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	dfs(0, 0);
//	cout << minn;
//}