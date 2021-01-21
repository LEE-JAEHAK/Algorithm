//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//char map[52][52];
//int visited[52][52];
//int ans[52][52];
//int dir[8][2] = { {2,1},{1,2},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,1},{-1,2} };
//queue<pair<int, int>> q;
//int n, m;
//
//void BFS(char ch) {
//	int num = ch - '0';
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		if (visited[x][y] == num) {
//			ans[x][y]++;
//		}
//		for (int i = 0; i < 8; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 < nx && nx <= n && 0 < ny && ny <= m) {
//				q.push(make_pair(nx, ny));
//				visited[nx][ny] = visited[x][y] + 1;
//			}
//		}
//	}
//
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			if ('1' <= map[i][j] && map[i][j] <= '9') {
//				q.push(make_pair(i, j));
//				visited[i][j] = 1;
//				BFS(map[i][j]);
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cout << ans[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}