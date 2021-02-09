//#include <bits/stdc++.h>
//using namespace std;
//
//int w[1005];
//int v[1005];
//int dp[1005][10005];
//
//int main() {
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= k; i++) {
//		cin >> w[i] >> v[i];
//	}
//	for (int i = 1; i <= k; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (j >= v[i]) {
//				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
//			}
//			else {
//				dp[i][j] = dp[i - 1][j];
//			}
//		}
//	}
//	cout << dp[k][n];
//}