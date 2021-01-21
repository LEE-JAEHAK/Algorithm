//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[1001];
//int dp[1001];
//
//int main() {
//	int N, maxi = 0;
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> arr[i];
//		for (int j = i; j >= 1; j--) {
//			if (arr[j] < arr[i]) {
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//		maxi = max(maxi, dp[i]);
//	}
//	cout << maxi + 1;
//}