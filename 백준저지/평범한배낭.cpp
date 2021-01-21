//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int w[100005];
//int v[1005];
//int dp[1005][100005];
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> w[i] >> v[i];
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= k; j++) {
//			dp[i][j] = dp[i - 1][j];
//			if (j >= w[i]) {
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
//			}
//		}
//	}
//
//	cout << dp[n][k];
//}