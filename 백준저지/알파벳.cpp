//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//char arr[22][22];
//int visited[22][22];
//int alp[30];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//int maxx = 0;
//
//void dfs(int x, int y, int cnt) {
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//			if (visited[nx][ny] == 0 && alp[arr[nx][ny] - 'A'] == 0) {
//				visited[nx][ny] = 1;
//				alp[arr[nx][ny] - 'A'] = 1;
//				dfs(nx, ny, cnt + 1);
//				visited[nx][ny] = 0;
//				alp[arr[nx][ny] - 'A'] = 0;
//			}
//		}
//	}
//	maxx = max(maxx, cnt);
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	visited[0][0] = 1;
//	alp[arr[0][0] - 'A'] = 1;
//	dfs(0, 0, 1);
//	cout << maxx;
//}