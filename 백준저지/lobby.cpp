//#include <iostream>
//using namespace std;
//
//int main() {
//	while (1) {
//		int n, m, k;
//		cin >> n >> m >> k;
//		if (n == 0 && m == 0 && k == 0)break;
//
//		int maj = n / 2 + 1;
//		int idp = n - m - k;
//
//		if (maj - m <= idp) {
//			if (maj <= m)cout << 0 << '\n';
//			else cout << maj - m << '\n';
//		}
//		else {
//			cout << -1 << '\n';
//		}
//	}
//}