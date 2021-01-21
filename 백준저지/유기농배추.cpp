//#include <iostream>
//#include <queue>
//using namespace std;
//
//int arr[51][51];
//int check[51][51];
//int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
//queue<pair<int, int>> q;
//
//void bfs(int n, int m) {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + direction[i][0];
//			int ny = y + direction[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m && arr[nx][ny] == 1 && check[nx][ny] == 0) {
//				check[nx][ny] = 1;
//				q.push(make_pair(nx, ny));
//			}
//		}
//	}
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int m, n, k; // 가로 세로 
//		cin >> n >> m >> k; // 5 3 
//		for (int i = 0; i < k; i++) {
//			int a, b;
//			cin >> a >> b;
//			arr[a][b] = 1;
//		}
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (arr[i][j] == 1 && check[i][j] == 0) {
//					ans++;
//					q.push(make_pair(i, j));
//					check[i][j] = 1;
//					bfs(n, m);
//				}
//			}
//		}
//		cout << ans << endl;
//
//
//
//		//reset
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				arr[i][j] = 0;
//				check[i][j] = 0;
//			}
//		}
//	}
//}
