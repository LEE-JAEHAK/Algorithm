//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//int arr[10][10];
//int cop[10][10];
//vector<int> v;
//int vis[10][10];
//
//void print() {
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//int countt() {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 0)sum++;
//		}
//	}
//	return sum;
//}
//
//int visited[10][10];
//queue<pair<int, int>> q;
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//
//void bfs() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (visited[nx][ny] == 0 && arr[nx][ny] == 0) {
//					arr[nx][ny] = 2;
//					visited[nx][ny] = 1;
//					q.push({ nx,ny });
//				}
//			}
//		}
//	}
//}
//void reset() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cop[i][j] = arr[i][j];
//			visited[i][j] = 0;
//		}
//	}
//}
//void reset2() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			arr[i][j] = cop[i][j];
//		}
//	}
//}
//int maxx;
//void dfs(int x, int y, int cnt) {
//	if (cnt == 3) {
//		reset();
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				if (visited[i][j] == 0 && arr[i][j] == 2) {
//					q.push({ i,j });
//					visited[i][j] = 1;
//					bfs();
//				}
//			}
//		}
//		maxx = max(maxx, countt());
//		reset2();
//		//print();
//		return;
//	}
//	for (int i = x; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 0 && vis[i][j] == 0) {
//				arr[i][j] = 1;
//				vis[i][j] = 1;
//				dfs(i, j, cnt + 1);
//				vis[i][j] = 0;
//				arr[i][j] = 0;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//			cop[i][j] = arr[i][j];
//		}
//	}
//	dfs(0, 0, 0);
//	cout << maxx;
//}