//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[1005];
//int dp[1005];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		arr[a] = b;
//		dp[a] = 1;
//	}
//
//	for (int i = 1; i < 501; i++) {
//		for (int j = 1; j < i; j++) {
//			if (arr[i] > arr[j])
//				dp[i] = max(dp[i], dp[j] + 1);
//		}
//	}
//
//	int maxx = 0;
//	for (int i = 1; i <= 500; i++) {
//		maxx = max(maxx, dp[i]);
//	}
//	cout << n - maxx;
//}