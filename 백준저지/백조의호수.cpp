//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//char map[1505][1505];
//int r, c;
//bool visited[1505][1505];
//int dj[1505][1505];
//int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
//queue<pair<int, int>> q;
//queue<pair<int, int>> q2;
//vector<pair<int, int>> v;
//
//int parent[3'000'000];
//int find(int x) {
//	if (x == parent[x])return x;
//	else return parent[x] = find(parent[x]);
//}
//
//void merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return;
//	else parent[y] = x;
//}
//
//bool inside(int x, int y) {
//	if (0 <= x && x < r && 0 <= y && y < c)return 1;
//	else return 0;
//}
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q2.push(make_pair(x, y));
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (inside(nx, ny)) {
//				if (dj[nx][ny] > 0 && dj[x][y] != dj[nx][ny]) {
//					merge(dj[x][y], dj[nx][ny]);
//				}
//			}
//		}
//	}
//}
//
//void BFS2() {
//	while (!q2.empty()) {
//		int x = q2.front().first;
//		int y = q2.front().second;
//		q2.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (inside(nx, ny)) {
//				if (dj[nx][ny] == 0) {
//					dj[nx][ny] = dj[x][y];
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> r >> c;
//	int cnt = 1;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 'L') {
//				map[i][j] = '.';
//				v.push_back(make_pair(i, j));
//			}
//			if (map[i][j] == '.') {
//				q.push(make_pair(i, j));
//				dj[i][j] = cnt;
//				parent[cnt] = cnt;
//				cnt++;
//			}
//		}
//	}
//	int day = 0;
//	while (1) {
//		
//		BFS();
//		if (find(dj[v[0].first][v[0].second]) == find(dj[v[1].first][v[1].second]))break;
//		BFS2();
//
//		day++;
//	}
//	cout << day;
//}