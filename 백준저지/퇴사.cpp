//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int t[16];
//int p[16];
//int dp[16];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> t[i] >> p[i];
//	}
//	dp[1] = p[1];
//	if (t[1] > n) {
//		dp[1] = 0;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (i + t[i] <= n + 1) {
//			for (int j = 1; j < i; j++) {
//				if (i + 1 > j + t[j]) {
//					dp[i] = max(dp[j] + p[i], dp[i]);
//				}
//				else
//					dp[i] = max(p[i], dp[i]);
//			}
//		}
//	}
//	int ans = 0;
//	for (int i = 1; i <= n; i++) {
//		ans = max(ans, dp[i]);
//	}
//	cout << ans;
//}