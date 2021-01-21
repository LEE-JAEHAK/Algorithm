//#include <iostream>
//using namespace std;
//
//char arr[13][3000][3000];
//int dp[13];
////1 3 7 15 31 63 127 255 511 1023
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//
//	int n;
//	cin >> n;
//	dp[1] = 1;
//	for (int i = 2; i <= 10; i++) {
//		dp[i] = dp[i - 1] * 2 + 1;
//	}
//	for (int nn = 0; nn <= n + 1; nn++)
//		for (int i = 0; i <= dp[n] + 2; i++)
//			for (int j = 0; j <= 2 * dp[n]; j++)
//				arr[nn][i][j] = ' ';
//
//
//	for (int nn = 1; nn <= n; nn++) {
//
//		if (nn % 2 == 0) {
//			for (int i = 0; i < dp[nn]; i++) {
//				if (i == 0) {
//					for (int j = 0; j < dp[nn] * 2 - 1; j++) {
//						arr[nn][0][j] = '*';
//					}
//				}
//				arr[nn][i][i] = '*';
//				arr[nn][i][dp[nn] * 2 - 2 - i] = '*';
//			}
//		}
//		else {
//			for (int i = 0; i < dp[nn]; i++) {
//				for (int j = 0; j < dp[nn] * 2 - 1; j++) {
//					arr[nn][dp[nn] - 1][j] = '*';
//				}
//				arr[nn][dp[nn] - i - 1][i] = '*';
//				arr[nn][dp[nn] - i - 1][(dp[nn] * 2 - 2) - i] = '*';
//			}
//		}
//
//		if (nn % 2) {
//			for (int i = 0; i < dp[nn]; i++) {
//				for (int j = 0; j < dp[nn] * 2 - 1; j++) {
//					arr[nn + 1][i + 1][j + dp[nn + 1] - dp[nn]] = arr[nn][i][j];
//				}
//			}
//		}
//		else {
//			for (int i = 0; i < dp[nn]; i++) {
//				for (int j = 0; j < dp[nn] * 2 - 1; j++) {
//					arr[nn + 1][i + dp[nn + 1] / 2][j + dp[nn + 1] - dp[nn]] = arr[nn][i][j];
//				}
//			}
//		}
//	}
//
//	if (n % 2 == 1) {
//		for (int i = 0; i < dp[n]; i++) {
//			for (int j = 0; j < dp[n] + i; j++) {
//				cout << arr[n][i][j];
//			}
//			cout << '\n';
//		}
//	}
//	else {
//		for (int i = 0; i < dp[n]; i++) {
//			for (int j = 0; j < dp[n] * 2 - 1 - i; j++) {
//				cout << arr[n][i][j];
//			}
//			cout << '\n';
//		}
//	}
//}