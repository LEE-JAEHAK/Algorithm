//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int count(int num) {
//	int ret = 0;
//	while (num) {
//		ret += num & 1;
//		num >>= 1;
//	}
//	return ret;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	for (int c = 1; c <= t; c++) {
//		int n, ans = 0;
//		cin >> n;
//		for (int i = 0; i <= n / 2; i++) {
//			int a = i, b = n - i;
//			ans = max(ans, count(a) + count(b));
//		}
//		cout << "Case #" << c << ": " << ans << endl;
//	}
//}