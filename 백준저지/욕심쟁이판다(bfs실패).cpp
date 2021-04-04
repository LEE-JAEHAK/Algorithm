//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[505][505];
////priority_queue<pair<int, pair<int, int>>> v;
//queue<pair<int, int>> q;
//int visited[505][505];
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
//			if (0 <= nx && nx < n && 0 <= ny && ny < n && arr[x][y]<arr[nx][ny]) {
//				if (visited[nx][ny] <= visited[x][y]) {
//					visited[nx][ny] = visited[x][y] + 1;
//					q.push({ nx,ny });
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
//			//v.push({ -arr[i][j],{i,j} });
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (visited[i][j] == 0) {
//				q.push({ i,j });
//				visited[i][j] = 1;
//				bfs();
//			}
//		}
//	}
//	//while (!v.empty()) {
//	//	int x = v.top().second.first;
//	//	int y = v.top().second.second;
//	//	v.pop();
//	//	if (visited[x][y] == 0) {
//	//		visited[x][y] = 1;
//	//		q.push({ x,y });
//	//		bfs();
//	//	}
//	//}
//	int maxx = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			//cout << visited[i][j] << ' ';
//			maxx = max(maxx, visited[i][j]);
//		}
//		//cout << endl;
//	}
//	cout << maxx;
//}