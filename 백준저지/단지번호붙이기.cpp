//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n;
//int arr[26][26];
//bool check[26][26];
//queue<pair<int, int>> q;
//int direction[4][2] = { {1,0},{-1,0},{0,1},{0,-1} };
//vector<int> v;
//
//void bfs(int x, int y) {
//	int cur = 0;
//	q.push(make_pair(x, y));
//	check[x][y] = true;
//	while (!q.empty()) {
//		cur++;
//		int newx = q.front().first;
//		int newy = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = newx + direction[i][0];
//			int ny = newy + direction[i][1];
//			if (nx >= 0 && nx < n && ny >= 0 && ny < n && check[nx][ny] == false && arr[nx][ny] == 1) {
//				check[nx][ny] = true;
//				q.push(make_pair(nx, ny));
//			}
//		}
//	}
//	v.push_back(cur);
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			scanf("%1d", &arr[i][j]);
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] == 1 && check[i][j] == false) {
//				bfs(i, j);
//				ans++;
//			}
//		}
//	}
//	cout << ans << endl;
//	sort(v.begin(), v.end());
//	for (auto it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//}