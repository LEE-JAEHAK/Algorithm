//#include <iostream>
//using namespace std;
//
//int map[10][10];
//int ans = 0;
//
//void move(int t, int x, int y) {
//	if (t == 1) {
//		int tx = x, ty = y + 1;
//		while (ty < 9 && map[tx][ty + 1] == 0) ty++;
//		map[tx][ty] = 1;
//		tx = x + 1, ty = y;
//		while (tx < 9 && map[tx + 1][ty] == 0) tx++;
//		map[tx][ty] = 1;
//	}
//	else if (t == 2) {
//		int tx = x, ty = y + 2;
//		while (ty < 9 && map[tx][ty + 1] == 0) ty++;
//		map[tx][ty] = 1;
//		map[tx][ty - 1] = 1;
//		tx = x + 1, ty = y;
//		int tty = y + 1;
//		while (tx < 9 && map[tx + 1][ty] == 0 && map[tx + 1][tty] == 0) tx++;
//		map[tx][ty] = 1;
//		map[tx][tty] = 1;
//	}
//	else {
//		int tx = x, ttx = x + 1, ty = y;
//		while (ty < 9 && map[tx][ty + 1] == 0 && map[ttx][ty + 1] == 0) ty++;
//		map[tx][ty] = 1;
//		map[ttx][ty] = 1;
//		tx = x, ttx = x + 1, ty = y;
//		while (ttx < 9 && map[ttx + 1][ty] == 0) {
//			tx++;
//			ttx++;
//		}
//		map[tx][ty] = 1;
//		map[ttx][ty] = 1;
//	}
//}
//
//void removex(int x) {
//	for (int i = x; i >= 5; i--) {
//		for (int j = 0; j < 4; j++) {
//			map[i][j] = map[i - 1][j];
//		}
//	}
//	map[4][0] = 0, map[4][1] = 0, map[4][2] = 0, map[4][3] = 0;
//}
//
//void removey(int y) {
//	for (int j = y; j >= 5; j--) {
//		for (int i = 0; i < 4; i++) {
//			map[i][j] = map[i][j - 1];
//		}
//	}
//	map[0][4] = 0, map[1][4] = 0, map[2][4] = 0, map[3][4] = 0;
//}
//
//void check() {
//	for (int i = 6; i < 10; i++) {
//		int cnt = 0;
//		for (int j = 0; j < 4; j++) {
//			if (map[i][j] == 1)cnt++;
//		}
//		if (cnt == 4) {
//			removex(i);
//			ans++;
//		}
//	}
//
//	for (int j = 6; j < 10; j++) {
//		int cnt = 0;
//		for (int i = 0; i < 4; i++) {
//			if (map[i][j] == 1)cnt++;
//		}
//		if (cnt == 4) {
//			removey(j);
//			ans++;
//		}
//	}
//}
//
//void special() {
//	for (int i = 0; i < 4; i++) {
//		if (map[i][4] == 1) {
//			removey(9);
//			break;
//		}
//	}
//	for (int i = 0; i < 4; i++) {
//		if (map[i][5] == 1) {
//			removey(9);
//			break;
//		}
//	}
//
//	for (int j = 0; j < 4; j++) {
//		if (map[4][j] == 1) {
//			removex(9);
//			break;
//		}
//	}
//	for (int j = 0; j < 4; j++) {
//		if (map[5][j] == 1) {
//			removex(9);
//			break;
//		}
//	}
//}
//
//int counts() {
//	int cnt = 0;
//	for (int i = 6; i < 10; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (map[i][j] == 1)cnt++;
//		}
//	}
//	for (int j = 6; j < 10; j++) {
//		for (int i = 0; i < 4; i++) {
//			if (map[i][j] == 1)cnt++;
//		}
//	}
//	return cnt;
//}
//
//void print() {
//	cout << endl;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			cout << map[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	cout << endl;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int t, x, y;
//		cin >> t >> x >> y;
//		move(t, x, y);
//		check();
//		special();
//		//print();
//	}
//	cout << ans << endl << counts();
//}