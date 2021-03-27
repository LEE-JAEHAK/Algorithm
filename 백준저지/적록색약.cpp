//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//char arr[105][105];
//int visited[105][105];
//int dir[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
//queue<pair<int, int>> q;
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
//				if (visited[nx][ny] == 0 && arr[nx][ny] == arr[x][y]) {
//					q.push({ nx,ny });
//					visited[nx][ny] = 1;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (visited[i][j] == 0) {
//				visited[i][j] = 1;
//				q.push({ i,j });
//				BFS();
//				sum1++;
//			}
//		}
//	}
//	cout << sum1 << ' ';
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			visited[i][j] = 0;
//			if (arr[i][j] == 'G')arr[i][j] = 'R';
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (visited[i][j] == 0) {
//				visited[i][j] = 1;
//				q.push({ i,j });
//				BFS();
//				sum2++;
//			}
//		}
//	}
//	cout << sum2;
//}