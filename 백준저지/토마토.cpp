//#include <iostream>
//#include <queue>
//using namespace std;
//
//int m, n;
//int arr[1001][1001];
//int check[1001][1001];
//queue<pair<int, int>> q;
//int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + direction[i][0];
//			int ny = y + direction[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m && arr[nx][ny] == 0) {
//				arr[nx][ny] = arr[x][y] + 1;
//				q.push(make_pair(nx, ny));
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> m >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 1) {
//				q.push(make_pair(i, j));
//				check[i][j] = 1;
//			}
//		}
//	}
//	bfs();
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (ans < arr[i][j])
//				ans = arr[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 0)
//				ans = -1;
//		}
//	}
//
//	if (ans == -1)cout << ans;
//	else	cout << ans - 1;
//}