//#include <iostream>
//using namespace std;
//
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int m, n, x, y;
//		bool check = 0;
//		cin >> m >> n >> x >> y;
//		x -= 1, y -= 1;
//		for (int i = x; i < (n * m); i += m) {
//			if (i % n == y) {
//				cout << i + 1 << endl;
//				check = 1;
//				break;
//			}
//		}
//		if (!check) {
//			cout << -1 << endl;
//		}
//	}
//}