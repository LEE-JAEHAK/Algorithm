//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v;
//int dp[505][505];
//int sum[505];
//
//int recur(int start, int end) {
//	if (dp[start][end] != 1e9)return dp[start][end];
//	if (start == end)return dp[start][end] = v[start];
//	if (start + 1 == end)return dp[start][end] = v[start] + v[end];
//
//	for (int mid = start; mid < end; mid++) {
//		int left = recur(start, mid);
//		int right = recur(mid + 1, end);
//		dp[start][end] = min(dp[start][end], left + right);
//		cout << start << ' ' <<  end << ' ' << dp[start][end] << endl;
//	}
//	return dp[start][end];
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		v.clear();
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= n; j++) {
//				dp[i][j] = 1e9;
//			}
//		}
//		v.resize(n + 1);
//		for (int i = 1; i <= n; i++) {
//			cin >> v[i];
//			sum[i] = sum[i - 1] + v[i];
//		}
//		recur(1, n);
//		cout << dp[1][n];
//	}
//}