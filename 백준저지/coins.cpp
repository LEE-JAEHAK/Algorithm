//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[25];
//int dp[10005];
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		for (int i = 1; i <= n; i++)cin >> arr[i];
//		int m;
//		cin >> m;
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= m; j++) {
//				if (j >= arr[i]) {
//					if (j % arr[i] == 0) {
//						dp[j] = max(dp[j] + 1, dp[j] + dp[j - arr[i]]);
//					}
//					else {
//						dp[j] = max(dp[j], dp[j] + dp[j - arr[i]]);
//					}
//				}
//				else {
//					dp[j] = dp[j];
//				}
//
//			}
//		}
//		int maxx = 0;
//		for (int j = 1; j <= m; j++) {
//			maxx = (maxx, dp[j]);
//		}
//		cout << maxx << '\n';
//		for (int j = 1; j <= m; j++) {
//			dp[j] = 0;
//		}
//	}
//}