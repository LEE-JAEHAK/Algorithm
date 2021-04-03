//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//int arr[1005][1005];
//int dir[8][2] = { {0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1} };
//queue<pair<int, int>> q;
//queue<pair<int, int>> qq;
//bool flag;
//
//void bfs() {
//	flag = 0;
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 8; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (arr[nx][ny] > 0) {
//					arr[nx][ny]--;
//					if (arr[nx][ny] == 0) {
//						flag = 1;
//						qq.push({ nx,ny });
//					}
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n >> m;
//	char a;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> a;
//			if (a == '.') { 
//				arr[i][j] = 0;
//				q.push({ i,j });
//			}
//			else arr[i][j] = a - '0';
//		}
//	}
//	int cnt = 0;
//	while (1) {
//		bfs();
//		if (flag == 0)break;
//		cnt++;
//		q.swap(qq);
//	}
//	cout << cnt;
//}