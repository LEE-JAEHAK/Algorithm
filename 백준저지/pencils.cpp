//#include <iostream>
//using namespace std;
//
//int arr[101];
//
//int main() {
//	for (int w = 1; w < 35; w++) {
//		int n;
//		cin >> n; // 10 20 40
//		if (n == 0)return 0;
//
//		cout << "Case " << w << ":\n";
//		cout << n << " pencils for " << n << " cents\n";
//		int cnt = 0;
//		for (int i = 0; i <= n; i++) {
//			for (int j = 0; j <= n; j++) {
//				for (int k = 0; k <= n; k++) {
//					if (i + j + k == n && i * 4 + j * 0.5 + k * 0.25 == n && i != 0 && j != 0 && k != 0) {
//						cout << i << " at four cents each\n";
//						cout << j << " at two for a penny\n";
//						cout << k << " at four for a penny\n\n";
//						cnt++;
//					}
//				}
//			}
//		}
//		if (cnt == 0)cout << "No solution found.\n\n";
//	}
//}