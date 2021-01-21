//#include <iostream>
//#include <vector>
//using namespace std;
//
//int arr[12][12];
//vector<pair<int, int>> v;
//bool check(int x, int y, int num) {
//	bool ret = 0;
//	int tmpx = (x - 1) / 3, tmpy = (y - 1) / 3;
//	for (int i = 1 + 3 * tmpx; i <= 3 + 3 * tmpx; i++) {
//		for (int j = 1 + 3 * tmpy; j <= 3 + 3 * tmpy; j++) {
//			if (arr[i][j] == num)
//				return 1;
//		}
//	}
//	return ret;
//}
//bool rowcheck(int x, int y, int num) {
//	bool ret = 0;
//	for (int j = 1; j <= 9; j++) {
//		if (arr[x][j] == num)
//			return 1;
//	}
//	return ret;
//}
//bool colcheck(int x, int y, int num) {
//	bool ret = 0;
//	for (int i = 1; i <= 9; i++) {
//		if (arr[i][y] == num)
//			return 1;
//	}
//	return ret;
//}
//void recur(int idx) {
//	if (idx == v.size()) {
//		for (int i = 1; i <= 9; i++) {
//			for (int j = 1; j <= 9; j++) {
//				cout << arr[i][j] << ' ';
//			}
//			cout << '\n';
//		}
//		exit(0);
//	}
//	int x = v[idx].first;
//	int y = v[idx].second;
//	for (int i = 1; i <= 9; i++) {
//		if (!rowcheck(x, y, i) && !colcheck(x, y, i) && !check(x, y, i)) {
//			arr[x][y] = i;
//			recur(idx + 1);
//			arr[x][y] = 0;
//		}
//	}
//}
//
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 0) {
//				v.push_back(make_pair(i, j));
//			}
//		}
//	}
//	recur(0);
//}