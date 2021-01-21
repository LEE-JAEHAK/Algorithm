//#include <iostream>
//#include <cstring>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int r, c, n;
//char map[105][105];
//bool visited[105][105];
//bool cluster[105][105];
//int throws[105];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//queue<pair<int, int>> q;
//vector<pair<int, int>> v;
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < r && 0 <= ny && ny < c) {
//				if (map[nx][ny] == 'x' && visited[nx][ny] == 0) {
//					q.push(make_pair(nx, ny));
//					visited[nx][ny] = 1;
//				}
//			}
//		}
//	}
//}
//bool checkair() {
//	for (int j = 0; j < c; j++) {
//		if (map[r - 1][j] == 'x' && visited[r - 1][j] == 0) {
//			q.push(make_pair(r - 1, j));
//			visited[r - 1][j] = 1;
//			BFS();
//		}
//	}
//	bool ret = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (map[i][j] == 'x' && visited[i][j] == 0) {
//				v.push_back(make_pair(i, j));
//				cluster[i][j] = 1;
//				ret = 1;
//			}
//		}
//	}
//	return ret;
//}
//int dist(int x, int y) {
//	int cnt = 0;
//	for (int i = x + 1; i < r; i++) {
//		if (map[i][y] == '.')cnt++;
//		else {
//			if (cluster[i][y])return 1e9;
//			else return cnt;
//		}
//	}
//	return cnt;
//}
//void gravity() {
//	int height = 1e9;
//	for (int i = 0; i < v.size(); i++) {
//		int x = v[i].first;
//		int y = v[i].second;
//		height = min(height, dist(x, y));
//	}
//	sort(v.begin(), v.end());
//	for (int i = v.size() - 1; i >= 0; i--) {
//		int x = v[i].first;
//		int y = v[i].second;
//		map[x][y] = '.';
//		map[x + height][y] = 'x';
//	}
//}
//void reset() {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			visited[i][j] = 0;
//			cluster[i][j] = 0;
//		}
//	}
//	v.clear();
//
//}
//
//int main() {
//	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//		}
//	}
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> throws[i];
//	}
//
//	for (int k = 1; k <= n; k++) {
//		if (k % 2 == 1) {
//			for (int j = 0; j < c; j++) {
//				if (map[r - throws[k]][j] != '.') {
//					map[r - throws[k]][j] = '.';
//					break;
//				}
//			}
//		}
//		else {
//			for (int j = c - 1; j >= 0; j--) {
//				if (map[r - throws[k]][j] != '.') {
//					map[r - throws[k]][j] = '.';
//					break;
//				}
//			}
//		}
//
//		if (checkair()) {
//			gravity();
//		}
//		reset();
//
//	}
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << map[i][j];
//		}
//		cout << '\n';
//	}
//	cout << '\n';
//}