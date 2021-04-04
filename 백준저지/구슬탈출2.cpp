//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//char arr[12][12];
//char cop[12][12];
//int red, blue;
//
//void goleft(char mar, int x, int y) {
//	int ny = y;
//	arr[x][y] = '.';
//	while (arr[x][ny - 1] == '.') {
//		ny--;
//	}
//	arr[x][ny] = mar;
//	if (arr[x][ny - 1] == 'O') {
//		if (mar == 'B')blue = 1;
//		if (mar == 'R') { arr[x][ny] = '.';red = 1; }
//	}
//}
//void left() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 'R' || arr[i][j] == 'B') {
//				goleft(arr[i][j], i, j);
//			}
//		}
//	}
//}
//
//void goright(int x, int y) {
//	int ny = y;
//	char mar = arr[x][y];
//	arr[x][y] = '.';
//	while (arr[x][ny + 1] == '.') {
//		ny++;
//	}
//	arr[x][ny] = mar;
//	if (arr[x][ny + 1] == 'O') {
//		if (mar == 'B')blue = 1;
//		if (mar == 'R') { arr[x][ny] = '.';red = 1; }
//	}
//}
//void right() {
//	for (int i = 0; i < n; i++) {
//		for (int j = m - 1; j >= 0; j--) {
//			if (arr[i][j] == 'R' || arr[i][j] == 'B') {
//				goright(i, j);
//			}
//		}
//	}
//}
//
//void goup(int x, int y) {
//	int nx = x;
//	char mar = arr[x][y];
//	arr[x][y] = '.';
//	while (arr[nx - 1][y] == '.') {
//		nx--;
//	}
//	arr[nx][y] = mar;
//	if (arr[nx - 1][y] == 'O') {
//		if (mar == 'B')blue = 1;
//		if (mar == 'R') { arr[nx][y] = '.'; red = 1; }
//	}
//}
//void up() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 'R' || arr[i][j] == 'B') {
//				goup(i, j);
//			}
//		}
//	}
//}
//
//void godown(int x, int y) {
//	int nx = x;
//	char mar = arr[x][y];
//	arr[x][y] = '.';
//	while (arr[nx + 1][y] == '.') {
//		nx++;
//	}
//	arr[nx][y] = mar;
//	if (arr[nx + 1][y] == 'O') {
//		if (mar == 'B')blue = 1;
//		if (mar == 'R') { arr[nx][y] = '.'; red = 1; }
//	}
//}
//void down() {
//	for (int i = n - 1; i >= 0; i--) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 'R' || arr[i][j] == 'B') {
//				godown(i, j);
//			}
//		}
//	}
//}
//void duplicate() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			arr[i][j] = cop[i][j];
//		}
//	}
//}
//vector<int> v;
//int maxx = 1e9;
//void dfs(int idx, int cnt) {
//	if (cnt == 10) {
//		duplicate();
//		red = 0, blue = 0;
//		for (int i = 0; i < v.size(); i++) {
//			//cout << v[i] << ' ';
//			if (v[i] == 0)left();
//			else if (v[i] == 1)right();
//			else if (v[i] == 2)up();
//			else if (v[i] == 3)down();
//
//			if (blue == 1) { return; }
//			if (red == 1) { maxx = min(maxx, i); }
//		}
//		//cout << endl;
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		if (i == idx)continue;
//		v.push_back(i);
//		dfs(i, cnt + 1);
//		v.pop_back();
//	}
//	return;
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//			cop[i][j] = arr[i][j];
//		}
//	}
//	dfs(4, 0);
//	if (maxx != 1e9)cout << maxx + 1;
//	else cout << -1;
//}