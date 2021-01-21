//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//char map[55][55];
//int dist[55][55];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//queue<pair<int, int>> q;
//int n;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < n) {
//				if (dist[nx][ny] > dist[x][y]) {
//					dist[nx][ny] = dist[x][y];
//					if (map[nx][ny] == '0') {
//						dist[nx][ny]++;
//					}
//					q.push({ nx,ny });
//				}
//			}
//		}
//	}
//	//cout << dist[n-1][n-1];
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << dist[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			dist[i][j] = 1e9;
//		}
//	}
//	
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < n; j++)
//			cin >> map[i][j];
//
//	dist[0][0] = 0;
//	q.push({ 0,0 });
//	BFS();
//}