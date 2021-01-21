//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n, m;
//int arr[101][101];
//int check[101][101];
//int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
//queue<pair<int, int>> q;
//
//void bfs() {
//	q.push(make_pair(0, 0));
//	check[0][0] = 1;
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		if (x == n - 1 && y == m - 1)return;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + direction[i][0];
//			int ny = y + direction[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m && arr[nx][ny] == 1 && check[nx][ny] == 0) {
//				check[nx][ny] = check[x][y] + 1;
//				q.push(make_pair(nx, ny));
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf("%1d", &arr[i][j]);
//		}
//	}
//	bfs();
//	cout << check[n - 1][m - 1];
//}