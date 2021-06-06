//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[20][20];
//int dp[1 << 16][20];
//
//int dfs(int cur, int bit) {
//	if (bit == (1 << n) - 1) { // 다 돌았으면
//		if (arr[cur][0] != 0) { // 길이 있으면
//			return arr[cur][0];
//		}
//		else return 1e8; // 길이 없으면 무한대 리턴
//	}
//	if (dp[bit][cur] != -1)return dp[bit][cur];
//	dp[bit][cur] = 1e8;
//
//	for (int i = 0; i < n; i++) {
//		if (bit & (1 << i) || arr[cur][i] == 0) { // 방문 했거나, 길이 없으면
//			continue;
//		}
//		dp[bit][cur] = min(dp[bit][cur], arr[cur][i] + dfs(i, bit | (1 << i)));
//	}
//	return dp[bit][cur];
//}
//
//int main() {
//	memset(dp, -1, sizeof(dp));
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	cout << dfs(0, 1);
//}