//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int dir[4][2] = { {0,1},{0,-1},{-1,0},{1,0} };
//int map[105][105];
//int visited[105][105];
//int n, m;
//queue<pair<int, int>> q;
//
//void BFS1() {
//	q.push({ 0,0 });
//	visited[0][0] = 1;
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		map[x][y] = 2;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (visited[nx][ny] == 0 && (map[nx][ny] == 0 || map[nx][ny] == 2 || map[nx][ny] == 3)) {
//					q.push({ nx,ny });
//					visited[nx][ny] = 1;
//				}
//			}
//		}
//	}
//}
//
//void BFS2() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		int cnt = 0;
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (map[nx][ny] == 2) {
//					cnt++;
//					if (cnt >= 2) {
//						map[x][y] = 3;
//					}
//				}
//			}
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (visited[nx][ny] == 0 && (map[nx][ny] == 1 || map[nx][ny] == 3)) {
//					q.push({ nx,ny });
//					visited[nx][ny] = 1;
//				}
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
//bool check() {
//	bool ret = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (map[i][j] == 1)ret = 1;
//		}
//	}
//	return ret;
//}
//
//void print() {
//	cout << '\n';
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//		}
//	}
//	int time = 0;
//	while (1) {
//		BFS1();
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (visited[i][j] == 0) {
//					q.push({ i,j });
//					visited[i][j] = 1;
//					BFS2();
//				}
//			}
//		}
//		time++;
//		//print();
//		if (!check())break;
//		reset();
//	}
//	cout << time;
//}