//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int map[55][55];
//int far[55][55];
//int dir[8][2] = { {1,0},{-1,0},{0,1},{0,-1},{-1,-1},{1,1},{-1,1},{1,-1} };
//queue<pair<int, int>> q;
//int n, m;
//int visited[55][55];
//
//void reset() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			visited[i][j] = 0;
//		}
//	}
//}
//
//void BFS(int ox, int oy) {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		if (map[x][y] == 1) {
//			while (!q.empty())q.pop();
//			far[ox][oy] = visited[x][y] - 1;
//			return;
//		}
//		q.pop();
//		for (int i = 0; i < 8; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m && visited[nx][ny] == 0) {
//				visited[nx][ny] = visited[x][y] + 1;
//				q.push({ nx,ny });
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0;i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//	for (int i = 0;i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			q.push({ i,j });
//			visited[i][j] = 1;
//			BFS(i, j);
//			reset();
//		}
//	}
//	int maxx = 0;
//	for (int i = 0;i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			maxx = max(maxx, far[i][j]);
//		}
//	}
//	cout << maxx;
//}