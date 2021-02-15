//#include <bits/stdc++.h>
//using namespace std;
//
//
//long long arr[1100][1100];
//long long dp[1100][1100];
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> arr[i][j];
//			dp[i][j] = arr[i][j]+dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1];
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		int a, b, c, d;
//		cin >> a >> b >> c >> d;
//		cout << dp[c][d] - dp[c][b - 1] - dp[a - 1][d] + dp[a - 1][b - 1] << '\n';
//	}
//}