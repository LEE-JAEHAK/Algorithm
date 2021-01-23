//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//char MAP[55][55];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//int visited[55][55];
//queue<pair<int, int>> q;
//int maxx;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		maxx = max(maxx, visited[x][y]);
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m && visited[nx][ny] == 0 && MAP[nx][ny] == 'L') {
//				q.push({ nx,ny });
//				visited[nx][ny] = visited[x][y] + 1;
//			}
//		}
//	}
//}
//
//void reset() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			visited[i][j] = 0;
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (MAP[i][j] == 'L') {
//				visited[i][j] = 1;
//				q.push({ i,j });
//				BFS();
//				reset();
//			}
//		}
//	}
//	cout << maxx - 1;
//}