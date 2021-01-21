//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int arr[1005];
//int dp[1005];
//int parent[1005];
//
//void recursive(int x) {
//	if (x == 0)return;
//	recursive(parent[x]);
//	cout << arr[x] << ' ';
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> arr[i];
//	int maxx = 0, idx = 0;
//	for (int i = 1; i <= n; i++) {
//		dp[i] = 1;
//		for (int j = 1; j < i; j++) {
//			if (arr[i] > arr[j]) {
//				if (dp[i] < dp[j] + 1) {
//					dp[i] = dp[j] + 1;
//					parent[i] = j;
//					if (maxx < dp[i]) {
//						maxx = dp[i];
//						idx = i;
//					}
//				}
//			}
//		}
//	}
//	if (maxx == 0) { cout << 1 << '\n' << arr[1]; return 0; }
//	cout << maxx << '\n';
//	recursive(idx);
//}