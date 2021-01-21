//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int arr[105];
//int dp[10005];
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)cin >> arr[i];
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= k; j++) {
//			if (j - arr[i] >= 0)
//				dp[j] = dp[j] + dp[j - arr[i]];
//		}
//	}
//	cout << dp[k];
//}