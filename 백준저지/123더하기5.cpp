//#include <iostream>
//using namespace std;
//
//long long int dp[100001][4];
//
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int n;
//		cin >> n;
//		dp[1][1] = 1, dp[2][2] = 1, dp[3][3] = 1;
//		for (int i = 2; i <= n; i++) {
//			if (i > 1)dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
//			if (i > 2)dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
//			if (i > 3)dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
//		}
//		cout << (dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009 << endl;
//	}
//}