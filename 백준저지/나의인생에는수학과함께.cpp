//#include <iostream>
//#include <algorithm>
//#include <map>
//#include <string>
//#include <queue>
//using namespace std;
//
//int n;
//char arr[7][7];
//int visited[7][7];
//int dir[2][2] = { {1,0},{0,1} };
//queue<pair<int, int>> q;
//vector<char> v;
//
//int maxx = -1e9, minn = 1e9;
//void DFS(int x, int y, int cnt) {
//	if (x == n - 1 && y == n - 1) {
//		int sum = arr[0][0] - '0';
//		for (int i = 0; i < v.size() - 2; i += 2) {
//			if (v[i + 1] == '*')sum *= (v[i + 2] - '0');
//			if (v[i + 1] == '-')sum -= (v[i + 2] - '0');
//			if (v[i + 1] == '+')sum += (v[i + 2] - '0');
//		}
//		maxx = max(sum, maxx);
//		minn = min(sum, minn);
//		return;
//	}
//	for (int i = 0; i < 2; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (0 <= nx && nx < n && 0 <= ny && ny < n) {
//			if (visited[nx][ny] == 0) {
//				visited[nx][ny] = 1;
//				v.push_back(arr[nx][ny]);
//				DFS(nx, ny, cnt + 1);
//				visited[nx][ny] = 0;
//				v.pop_back();
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	visited[0][0] = 1;
//	v.push_back(arr[0][0]);
//	DFS(0, 0, 0);
//	cout << maxx << ' ' << minn;
//}