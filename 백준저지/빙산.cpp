//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//int arr[302][302];
//int dir[4][2] = { {1,0},{0,1},{-1,0},{0,-1} };
//bool visited[302][302];
//queue<pair<int, int>> q;
//
//void check(int x, int y) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (arr[nx][ny] == 0) {
//			arr[x][y]--;
//			if (arr[x][y] <= 0)arr[x][y] = -1;
//		}
//	}
//}
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			
//			if (arr[nx][ny] == -1) {
//				arr[nx][ny] = 0;
//			}
//			if (visited[nx][ny] == 0 && arr[nx][ny] > 0) {
//				q.push(make_pair(nx, ny));
//				visited[nx][ny] = 1;
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	int year = 0;
//	while (1) {
//		year++;
//		for (int i = 1; i < n - 1; i++) {
//			for (int j = 1; j < m - 1; j++) {
//				if (arr[i][j] > 0) {
//					check(i, j);
//				}
//			}
//		}
//		int cnt = 0;
//		for (int i = 1; i < n - 1; i++) {
//			for (int j = 1; j < m - 1; j++) {
//				if (arr[i][j] > 0 && visited[i][j] == 0) {
//					q.push(make_pair(i, j));
//					visited[i][j] = 1;
//					BFS();
//					cnt++;
//					if (cnt >= 2) {
//						cout << year;
//						return 0;
//					}
//				}
//			}
//		}
//
//		int cnt2 = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				//cout << arr[i][j] << ' ';
//				visited[i][j] = 0;
//				if (arr[i][j] > 0)cnt2++;
//			}
//			//cout << '\n';
//		}
//		if (cnt2 == 0) {
//			cout << 0;
//			return 0;
//		}
//	}
//}