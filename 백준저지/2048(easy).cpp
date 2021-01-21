//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//long long map[25][25];
//long long tmpmap[25][25];
//bool merged[25][25];
//int n;
//long long ans;
//
//void print() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//void goup(int x, int y) {
//	int num = map[x][y];
//	int nx = x;
//	while (0 < nx && map[nx - 1][y] == 0) {
//		nx--;
//		map[nx][y] = num;
//		map[nx + 1][y] = 0;
//	}
//	if (nx > 0 && map[nx][y] == map[nx - 1][y] && merged[nx - 1][y] == 0) {
//		map[nx - 1][y] *= 2;
//		merged[nx - 1][y] = 1;
//		map[nx][y] = 0;
//	}
//}
//void UP() {
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (map[i][j] == 0)continue;
//			goup(i, j);
//		}
//	}
//}
//
//void goright(int x, int y) {
//	int num = map[x][y];
//	int ny = y;
//	while ((n - 1) > ny&& map[x][ny + 1] == 0) {
//		ny++;
//		map[x][ny] = num;
//		map[x][ny - 1] = 0;
//	}
//	if (ny < n - 1 && map[x][ny] == map[x][ny + 1] && merged[x][ny + 1] == 0) {
//		map[x][ny + 1] *= 2;
//		merged[x][ny + 1] = 1;
//		map[x][ny] = 0;
//	}
//}
//void RIGHT() {
//	for (int j = n - 2; j >= 0; j--) {
//		for (int i = 0; i < n; i++) {
//			if (map[i][j] == 0)continue;
//			goright(i, j);
//		}
//	}
//}
//
//void godown(int x, int y) {
//	int num = map[x][y];
//	int nx = x;
//	while ((n - 1) > nx&& map[nx + 1][y] == 0) {
//		nx++;
//		map[nx][y] = num;
//		map[nx - 1][y] = 0;
//	}
//	if (nx < n - 1 && map[nx][y] == map[nx + 1][y] && merged[nx + 1][y] == 0) {
//		map[nx + 1][y] *= 2;
//		merged[nx + 1][y] = 1;
//		map[nx][y] = 0;
//	}
//}
//void DOWN() {
//	for (int i = n - 2; i >= 0; i--) {
//		for (int j = 0; j < n; j++) {
//			if (map[i][j] == 0)continue;
//			godown(i, j);
//		}
//	}
//}
//
//void goleft(int x, int y) {
//	int num = map[x][y];
//	int ny = y;
//	while (0 < ny && map[x][ny - 1] == 0) {
//		ny--;
//		map[x][ny] = num;
//		map[x][ny + 1] = 0;
//	}
//	if (ny > 0 && map[x][ny] == map[x][ny - 1] && merged[x][ny - 1] == 0) {
//		map[x][ny - 1] *= 2;
//		merged[x][ny - 1] = 1;
//		map[x][ny] = 0;
//	}
//}
//void LEFT() {
//	for (int j = 1; j < n; j++) {
//		for (int i = 0; i < n; i++) {
//			if (map[i][j] == 0)continue;
//			goleft(i, j);
//		}
//	}
//}
//
//void reset() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			merged[i][j] = 0;
//		}
//	}
//}
//
//vector<int> v;
//
//void solve2(vector<int> vv) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			map[i][j] = tmpmap[i][j];
//		}
//	}
//
//	for (int i = 0; i < vv.size(); i++) {
//		reset();
//		if (vv[i] == 1) {
//			UP();
//		}
//		if (vv[i] == 2) {
//			RIGHT();
//		}
//		if (vv[i] == 3) {
//			DOWN();
//		}
//		if (vv[i] == 4) {
//			LEFT();
//		}
//	}
//	/*for (int i = 0;i < vv.size(); i++)cout << vv[i] << ' ';
//	cout << endl;
//	print();*/
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			ans = max(ans, map[i][j]);
//		}
//	}
//}
//
//void solve(int cnt) {
//	if (cnt == 5) {
//		solve2(v);
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		if (i == 0) {
//			v.push_back(1);
//		}
//		else if (i == 1) {
//			v.push_back(2);
//		}
//		else if (i == 2) {
//			v.push_back(3);
//		}
//		else if (i == 3) {
//			v.push_back(4);
//		}
//		cnt++;
//		solve(cnt);
//		v.pop_back();
//		cnt--;
//	}
//}
//
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//			tmpmap[i][j] = map[i][j];
//		}
//	}
//	solve(0);
//	cout << ans;
//}