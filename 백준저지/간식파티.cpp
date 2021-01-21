//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[1005];
//int dp[1005];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		dp[i] = arr[i];
//	}
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j < i; j++) {
//			if (arr[i] > arr[j])
//				dp[i] = max(dp[i], dp[j] + arr[i]);
//		}
//	}
//	int maxx = 0;
//	for (int i = 0; i < n; i++) {
//		maxx = max(maxx, dp[i]);
//	}
//	cout << maxx;
//}