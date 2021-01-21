//#include <iostream>
//using namespace std;
//
//int n;
//bool check[17][17];
//
//bool queen(int a, int b) {
//	bool ret = 0;
//	for (int i = 1; i <= n; i++) { // 세로
//		if (a == i)continue;
//		if (check[i][b])return 1;
//	}
//	int x = a - 1, y = b - 1;
//	while (x > 0 && y > 0) { // 왼쪽 위
//		if (check[x][y])return 1;
//		x--;y--;
//	}
//	x = a - 1, y = b + 1;
//	while (x > 0 && y <= n) { // 오른쪽 위
//		if (check[x][y])return 1;
//		x--;y++;
//	}
//	return ret;
//}
//int ans;
//void recur(int row) {
//	if (row == n + 1) {
//		ans++;
//		return;
//	}
//	for (int j = 1; j <= n; j++) {
//		if (!queen(row, j)) {
//			check[row][j] = 1;
//			recur(row + 1);
//			check[row][j] = 0;
//		}
//	}
//}
//int main() {
//	cin >> n;
//	recur(1);
//	cout << ans;
//}