//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl '\n'
//int n, m, k;
//int MAP[105][105];
//int visited[105][105];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//queue<pair<int, int>> q;
//
//int BFS() {
//	int ans = 0;
//	while (!q.empty()) {
//		ans++;
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (visited[nx][ny] == 0 && MAP[nx][ny] == 0) {
//					q.push({ nx,ny });
//					visited[nx][ny] = 1;
//				}
//			}
//		}
//	}
//	return ans;
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n >> m >> k;
//	for (int idx = 0; idx < k; idx++) {
//		int a, b, c, d;
//		cin >> b >> a >> d >> c;
//		for (int i = a; i < c; i++) {
//			for (int j = b; j < d; j++) {
//				MAP[i][j] = 1;
//				visited[i][j] = 1;
//			}
//		}
//	}
//	int cnt = 0;
//	vector<int> v;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (visited[i][j] == 0) {
//				cnt++;
//				q.push({ i,j });
//				visited[i][j] = 1;
//				v.push_back(BFS());
//			}
//		}
//	}
//	sort(v.begin(), v.end());
//	cout << cnt << endl;
//	for (auto i : v)cout << i << ' ';
//}