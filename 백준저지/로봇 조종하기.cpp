//#include <bits/stdc++.h>
//using namespace std;
//#define endl '\n'
//
//int n, m;
//int arr[1005][1005];
//int dp[1005][1005];
//int tmp1[1005];
//int tmp2[1005];
//
//void print() {
//	cout << endl;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//
//void reset() {
//	for (int j = 0; j <= m + 1; j++) {
//		tmp1[j] = -1e9;
//		tmp2[j] = -1e9;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	reset();
//	int sum = 0;
//	for (int j = 1; j <= m; j++) {
//		sum += arr[1][j];
//		dp[1][j] = sum;
//	}
//
//	for (int i = 2; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			tmp1[j] = arr[i][j] + max(dp[i - 1][j], tmp1[j - 1]);
//		}
//		for (int j = m; j >= 1; j--) {
//			tmp2[j] = arr[i][j] + max(dp[i - 1][j], tmp2[j + 1]);
//		}
//		for (int j = 1; j <= m; j++) {
//			dp[i][j] = max(tmp1[j], tmp2[j]);
//		}
//	}
//	cout << dp[n][m];
//	//print();
//}