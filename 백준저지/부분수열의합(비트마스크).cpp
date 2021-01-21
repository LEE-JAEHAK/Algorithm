//#include <iostream>
//using namespace std;
//
//int arr[22];
//
//int main() {
//	int n, s, ans = 0;
//	cin >> n >> s; // 5 0
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 1; i < (1 << n); i++) {
//		int sum = 0;
//		for (int j = 0; j < n; j++) {
//			if (i & (1 << j)) {
//				sum += arr[j];
//			}
//		}
//		if (sum == s) {
//			ans++;
//		}
//	}
//	cout << ans;
//}