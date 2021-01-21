//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[502][502];
//bool visited[502][502];
//int dir[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
//int ans1;
//int n, m;
//
//void recursive(int x, int y, int sum, int cnt) {
//	if (cnt == 4) {
//		ans1 = max(ans1, sum);
//		return;
//	}
//
//	visited[x][y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dir[i][0];
//		int ny = y + dir[i][1];
//		if (0 <= nx && nx < n && 0 <= ny && ny < m && visited[nx][ny] == 0)
//			recursive(nx, ny, sum + arr[x][y], cnt + 1);
//	}
//	visited[x][y] = 0;
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//			cin >> arr[i][j];
//
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++) {
//			recursive(i, j, 0, 0);
//			if (j + 2 < m) {
//				int tmp = arr[i][j] + arr[i][j + 1] + arr[i][j + 2];
//				if (i - 1 >= 0) {
//					int tmp2 = tmp + arr[i - 1][j + 1];
//					ans = max(tmp2, ans);
//				}
//				if (i + 1 < n) {
//					int tmp2 = tmp + arr[i + 1][j + 1];
//					ans = max(tmp2, ans);
//				}
//			}
//			if (i + 2 < n) {
//				int tmp = arr[i][j] + arr[i + 1][j] + arr[i + 2][j];
//				if (j - 1 >= 0) {
//					int tmp2 = tmp + arr[i + 1][j - 1];
//					ans = max(tmp2, ans);
//				}
//				if (j + 1 < m) {
//					int tmp2 = tmp + arr[i + 1][j + 1];
//					ans = max(tmp2, ans);
//				}
//			}
//			ans = max(ans, ans1);
//		}
//
//
//
//	cout << ans;
//}