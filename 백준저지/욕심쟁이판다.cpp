//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[505][505];
//int dp[505][505];
//int dir[4][2] = { {0,1},{0,-1},{1,0},{-1,0} };
//
//int dfs(int x, int y) {
//	if (dp[x][y])return dp[x][y];
//	dp[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (0 <= nx && nx < n && 0 <= ny && ny < n) {
//			if (arr[x][y] < arr[nx][ny]) {
//				dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
//			}
//		}
//	}
//	return dp[x][y];
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	int maxx = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (dp[i][j] == 0) {
//				maxx = max(maxx, dfs(i, j));
//			}
//		}
//	}
//	cout << maxx;
//}