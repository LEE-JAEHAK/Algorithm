//#include <iostream>
//#include <queue>
//#include <vector>
//#include <bitset>
//using namespace std;
//
//int n, m, key, ans;
//char map[55][55];
//int visited[55][55][1 << 6];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//queue<pair<pair<int, int>, int>> q;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first.first;
//		int y = q.front().first.second;
//		key = q.front().second;
//		q.pop();
//		if (map[x][y] == '1') {
//			ans = visited[x][y][key];
//			break;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (visited[nx][ny][key] == 0) {
//					if (map[nx][ny] == '.' || map[nx][ny] == '1' || map[nx][ny] == '0') {
//						q.push(make_pair(make_pair(nx, ny), key));
//						visited[nx][ny][key] = visited[x][y][key] + 1;
//					}
//					if ('a' <= map[nx][ny] && map[nx][ny] <= 'f') {
//						int nkey = key | 1 << (map[nx][ny] - 'a');
//						visited[nx][ny][nkey] = visited[x][y][key] + 1;
//						q.push(make_pair(make_pair(nx, ny), nkey));
//					}
//					if ('A' <= map[nx][ny] && map[nx][ny] <= 'F') {
//						if (key & 1 << (map[nx][ny] - 'A')) {
//							visited[nx][ny][key] = visited[x][y][key] + 1;
//							q.push(make_pair(make_pair(nx, ny), key));
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	int sx, sy;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == '0') {
//				sx = i;sy = j;
//			}
//		}
//	}
//
//	q.push(make_pair(make_pair(sx, sy), 0));
//	visited[sx][sy][0] = 1;
//	BFS();
//
//	cout << ans - 1;
//}