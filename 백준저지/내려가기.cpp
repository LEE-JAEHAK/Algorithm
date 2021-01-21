//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int arr[5][5];
//int dp[5][5];
//int dpp[5][5];
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= 3; j++) {
//			cin >> arr[2][j];
//			dp[2][j] = max(max(dp[1][j - 1], dp[1][j]), dp[1][j + 1]) + arr[2][j];
//			if (j == 1) {
//				dpp[2][j] = min(dpp[1][j], dpp[1][j + 1]) + arr[2][j];
//			}
//			if (j == 2) {
//				dpp[2][j] = min(min(dpp[1][j - 1], dpp[1][j]), dpp[1][j + 1]) + arr[2][j];
//			}
//			if (j == 3) {
//				dpp[2][j] = min(dpp[1][j - 1], dpp[1][j]) + arr[2][j];
//			}
//		}
//		for (int j = 1; j <= 3; j++) {
//			dp[1][j] = dp[2][j];
//			dpp[1][j] = dp[2][j];
//			dpp[1][j] = dpp[2][j];
//			dpp[1][j] = dpp[2][j];
//		}
//	}
//	cout << max(max(dp[2][1], dp[2][2]), dp[2][3]) << ' ' << min(min(dpp[2][1], dpp[2][2]), dpp[2][3]);
//}