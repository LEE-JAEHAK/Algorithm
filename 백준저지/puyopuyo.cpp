//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//char arr[15][9];
//bool visited[15][9];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//queue<pair<int, int>> q;
//int ans;
//
//void reset() {
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			visited[i][j] = 0;
//		}
//	}
//}
//void bomb() {
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			if (visited[i][j])arr[i][j] = '.';
//		}
//	}
//}
//void check() {
//	for (int j = 0; j < 6; j++) {
//		string tmp;
//		for (int i = 11; i >= 0; i--) {
//			if (arr[i][j] != '.') {
//				tmp += arr[i][j];
//			}
//		}
//		for (int i = 0; i < 12; i++)arr[i][j] = '.';
//		for (int i = 0; i < tmp.length(); i++) {
//			arr[11 - i][j] = tmp[i];
//		}
//	}
//}
//int bombcnt;
//void BFS() {
//	int cnt = 0;
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		cnt++;
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (0 <= nx && nx < 12 && 0 <= ny && ny < 6) {
//				if (arr[nx][ny] == arr[x][y] && visited[nx][ny] == 0) {
//					visited[nx][ny] = 1;
//					q.push(make_pair(nx, ny));
//				}
//			}
//		}
//	}
//	if (cnt >= 4) {
//		bomb();
//		bombcnt++;
//	}
//	else {
//		reset();
//	}
//}
//
//int main() { // R G B P Y
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	while (1) {
//		bombcnt = 0;
//		for (int i = 0; i < 12; i++) {
//			for (int j = 0; j < 6; j++) {
//				if (arr[i][j] != '.') {
//					visited[i][j] = 1;
//					q.push(make_pair(i, j));
//					BFS();
//				}
//			}
//		}
//		if (bombcnt == 0)break;
//		check();
//		ans++;
//	}
//	cout << ans;
//}