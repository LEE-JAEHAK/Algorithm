//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[105][105];
//int dir[4][2] = { {1,0},{0,-1},{-1,0},{0,1} };
//int nx, ny;
//stack<int> s;
//stack<int> tmp;
//
//void bfs() {
//	while (!tmp.empty()) {
//		int d = tmp.top();
//		tmp.pop();
//		d += 1;
//		d %= 4;
//		nx = nx + dir[d][0];
//		ny = ny + dir[d][1];
//		arr[nx][ny] = 1;
//		s.push(d);
//	}
//}
//
//void print() {
//	cout << endl;
//	for (int i = 0; i <= 9; i++) {
//		for (int j = 0; j <= 9; j++) {
//			cout << arr[j][i] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//int main() {
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		while (!s.empty())s.pop();
//		int x, y, d, g;
//		cin >> x >> y >> d >> g;
//		arr[x][y] = 1;
//		nx = x + dir[d][0];
//		ny = y + dir[d][1];
//		arr[nx][ny] = 1;
//		s.push(d);
//		for (int j = 0; j < g; j++) {
//			tmp = s;
//			bfs();
//			//print();
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < 100; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (arr[i][j] == 1 && arr[i + 1][j] == 1 && arr[i][j + 1] == 1 && arr[i + 1][j + 1] == 1) {
//				ans++;
//			}
//		}
//	}
//	cout << ans;
//}