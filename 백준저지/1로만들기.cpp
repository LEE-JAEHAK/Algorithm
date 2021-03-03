//#include <bits/stdc++.h>
//using namespace std;
//
//int ans = 1e9;
//int dp[1000005];
//
//int DFS(int n) {
//	if (n == 1) {
//		return 0;
//	}
//	if (dp[n] > 0)return dp[n];
//	dp[n] = DFS(n - 1) + 1;
//	if (n % 2 == 0) {
//		int tmp = DFS(n / 2) + 1;
//		if (tmp < dp[n]) {
//			dp[n] = tmp;
//		}
//	}
//	if (n % 3 == 0) {
//		int tmp = DFS(n / 3) + 1;
//		if (tmp < dp[n]) {
//			dp[n] = tmp;
//		}
//	}
//	return dp[n];
//}
//
//int main() {
//	int n;
//	cin >> n;
//	DFS(n);
//	cout << dp[n];
//}