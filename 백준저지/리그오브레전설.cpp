//#include <iostream>
//using namespace std;
//
//int dp[20000];
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		dp[i] = dp[i - 1];
//		if (i - m >= 0)dp[i] = (dp[i] + dp[i - m]) % 1'000'000'007;
//	}
//	cout << dp[n];
//}