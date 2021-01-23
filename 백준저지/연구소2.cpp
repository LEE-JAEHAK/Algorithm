//#include <bits/stdc++.h>
//using namespace std;
//
//int MAP[55][55];
//int visited[55][55];
//int n, m;
//vector<int> perv;
//vector<pair<int, int>> v;
//queue<pair<int, int>> q;
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//
//void print() {
//	cout << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << visited[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//void reset() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			visited[i][j] = 0;
//		}
//	}
//}
//
//void BFS() {
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < n && 0 <= ny && ny < n && visited[nx][ny] == 0 && MAP[nx][ny] == 0) {
//				visited[nx][ny] = visited[x][y] + 1;
//				q.push({ nx,ny });
//			}
//		}
//	}
//}
//
//bool check() {
//	bool ret = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (MAP[i][j] == 1)continue;
//			if (visited[i][j] == 0)ret = 1;
//		}
//	}
//	return ret;
//}
//
//int MIN() {
//	int maxx = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			maxx = max(visited[i][j], maxx);
//		}
//	}
//	return maxx - 1;
//}
//
//int minn = 1e9;
//
//int main() {
//	cin >> n >> m;
//	int two = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> MAP[i][j];
//			if (MAP[i][j] == 2) {
//				two++;
//				v.push_back({ i,j });
//			}
//		}
//	}
//	for (int i = 0; i < two - m; i++) {
//		perv.push_back(0);
//	}
//	for (int i = 0; i < m; i++) {
//		perv.push_back(1);
//	}
//	do {
//		for (int i = 0; i < perv.size(); i++) {
//			int x = v[i].first;
//			int y = v[i].second;
//			if (perv[i] == 0) {
//				MAP[x][y] = 0;
//			}
//			else {
//				MAP[x][y] = 2;
//				q.push({ x,y });
//				visited[x][y] = 1;
//			}
//		}
//		BFS();
//		if (!check()) {
//			minn = min(minn, MIN());
//		}
//		//print();
//		reset();
//	} while (next_permutation(perv.begin(), perv.end()));
//	if (minn == 1e9)cout << -1;
//	else cout << minn;
//}