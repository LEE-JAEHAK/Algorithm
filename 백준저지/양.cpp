//#include <bits/stdc++.h>
//using namespace std;
//
//int r, c, lam, wol;
//char MAP[300][300];
//int visited[300][300];
//queue<pair<int, int>> q;
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//
//void BFS() {
//	int lamb = 0, wolf = 0;
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		if (MAP[x][y] == 'v')wolf++;
//		if (MAP[x][y] == 'o')lamb++;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < r && 0 <= ny && ny < c && visited[nx][ny] == 0 && MAP[nx][ny] != '#') {
//				q.push({ nx,ny });
//				visited[nx][ny] = 1;
//			}
//		}
//	}
//	if (lamb > wolf)lam += lamb;
//	else wol += wolf;
//}
//
//int main() {
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (visited[i][j] == 0) {
//				visited[i][j] = 1;
//				q.push({ i, j });
//				BFS();
//			}
//		}
//	}
//
//	cout << lam << ' ' << wol;
//}