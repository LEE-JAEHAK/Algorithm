//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl '\n'
//
//int n, m;
//int MAP[55][55];
//int visited[55][55];
//int dir[4][2] = { {-1,0},{0,1},{1,0},{0,-1} };
//queue<pair<pair<int, int>, int>> q;
//
//void print() {
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << setw(2) << visited[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first.first;
//		int y = q.front().first.second;
//		int d = q.front().second;
//		q.pop();
//
//		int no = 4;
//		d -= 1;
//		if (d == -1)d = 3;
//		bool flag = 0;
//		while (no--) {
//			int nx = x + dir[d][0];
//			int ny = y + dir[d][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (visited[nx][ny] == 0 && MAP[nx][ny] == 0) {
//					visited[nx][ny] = visited[x][y] + 1;
//					flag = 1;
//					//print();
//					q.push({ {nx,ny},d });
//					break;
//				}
//			}
//			d--;
//			if (d == -1)d = 3;
//		}
//		if (flag == 0) {
//			d++;
//			if (d == 4)d = 0;
//			int nx = x - dir[d][0];
//			int ny = y - dir[d][1];
//			q.push({ {nx,ny},d });
//			if (MAP[nx][ny] == 1) {
//				return;
//			}
//		}
//	}
//}
//
//int check() {
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (visited[i][j] != 0)cnt++;
//		}
//	}
//	return cnt;
//}
//
//int main() {
//	cin >> n >> m;
//	int r, c, d;
//	cin >> r >> c >> d;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//	visited[r][c] = 1;
//	q.push({ {r,c},d });
//	BFS();
//
//	print();
//	cout << check();
//}