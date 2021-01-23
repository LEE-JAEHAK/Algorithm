//#include <bits/stdc++.h>
//using namespace std;
//
//char MAP[15][8];
//bool visited[15][8];
//queue<pair<int, int>> q;
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//void print();
//
//void reset() {
//	for (int i = 1; i <= 12; i++) {
//		for (int j = 1; j <= 6; j++) {
//			visited[i][j] = 0;
//		}
//	}
//}
//
//void DELETE() {
//	for (int i = 1; i <= 12; i++) {
//		for (int j = 1; j <= 6; j++) {
//			if (visited[i][j])MAP[i][j] = '.';
//		}
//	}
//	reset();
//}
//
//void MOVE() {
//	for (int j = 1; j <= 6; j++) {
//		string s;
//		for (int i = 12; i >= 1; i--) {
//			s += MAP[i][j];
//		}
//		string ss;
//		for (int i = 0; i < s.length(); i++) {
//			if (s[i] == '.')continue;
//			ss += s[i];
//		}
//		for (int i = 12; i >= 1; i--) {
//			if (ss.length() > 12 - i) {
//				MAP[i][j] = ss[12 - i];
//			}
//			else {
//				MAP[i][j] = '.';
//			}
//		}
//	}
//}
//
//bool BFS() {
//	bool ret = 0;
//	int cnt = 0;
//	while (!q.empty()) {
//		cnt++;
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dir[i][0];
//			int ny = y + dir[i][1];
//			if (MAP[x][y] == MAP[nx][ny] && visited[nx][ny] == 0) {
//				visited[nx][ny] = 1;
//				q.push({ nx,ny });
//			}
//		}
//	}
//	if (cnt >= 4) {
//		ret = 1;
//		DELETE();
//		//print();
//	}
//	reset();
//	return ret;
//}
//
//void print() {
//	cout << endl;
//	for (int i = 1; i <= 12; i++) {
//		for (int j = 1; j <= 6; j++) {
//			cout << MAP[i][j];
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	for (int i = 1; i <= 12; i++) {
//		for (int j = 1; j <= 6; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//	int ans = 0;
//	while (1) {
//		bool flag = 0;
//		for (int i = 12; i > 0; i--) {
//			for (int j = 1; j <= 6; j++) {
//				if (MAP[i][j] != '.' && visited[i][j] == 0) {
//					visited[i][j] = 1;
//					q.push({ i,j });
//					if (BFS()) {
//						flag = 1;
//					}
//				}
//			}
//		}
//		if (flag == 0)break;
//		ans++;
//		MOVE();
//		reset();
//		//print();
//	}
//	cout << ans;
//}