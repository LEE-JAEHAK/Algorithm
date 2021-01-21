//#include <iostream>
//#include <queue>
//using namespace std;
//
//int n, a, b, c, d;
//int check[301][301];
//int direction[8][2] = { {1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1},{-2,1},{-1,2} };
//queue<pair<int, int>> q;
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		if (x == c && y == d) {
//			cout << check[x][y] - 1 << endl;
//			break;
//		}
//		for (int i = 0; i < 8; i++) {
//			int nx = x + direction[i][0];
//			int ny = y + direction[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < n && check[nx][ny] == 0) {
//				check[nx][ny] = check[x][y] + 1;
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
//		cin >> n >> a >> b >> c >> d;
//		check[a][b] = 1;
//		q.push(make_pair(a, b));
//		bfs();
//		while (!q.empty())q.pop();
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++)
//				check[i][j] = 0;
//		}
//	}
//}