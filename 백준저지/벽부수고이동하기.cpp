#include <bits/stdc++.h>
using namespace std;

int n, m;
int MAP[1005][1005];
int visited[1005][1005][2];
int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
queue<pair<pair<int, int>, bool>> q;
int minn = 1e9;

void BFS() {
	while (!q.empty()) {
		int x = q.front().first.first;
		int y = q.front().first.second;
		bool key = q.front().second;
		q.pop();
		if (x == n && y == m) {
			minn = min(minn, visited[x][y][key]);
		}
		for (int i = 0; i < 4; i++) {
			int nx = x + dir[i][0];
			int ny = y + dir[i][1];
			if (0 < nx && nx <= n && 0 < ny && ny <= m) {
				if (visited[nx][ny][key] == 0) {
					if (MAP[nx][ny] == 0) {
						visited[nx][ny][key] = visited[x][y][key] + 1;
						q.push({ {nx,ny},key });
					}
					else if (MAP[nx][ny] == 1 && key == 1) {
						visited[nx][ny][0] = visited[x][y][key] + 1;
						q.push({ {nx,ny},0 });
					}
				}
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			scanf("%1d", &MAP[i][j]);
		}
	}
	q.push({ {1,1},1 });
	visited[1][1][1] = 1;
	BFS();
	if (minn == 1e9)cout << -1;
	else cout << minn;
}