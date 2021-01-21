//#include <iostream>
//#include <algorithm>
//#include <cmath>
//using namespace std;
//
//int dp[100005];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i <= n; i++) {
//		dp[i] = 1e9;
//	}
//	dp[0] = 0;
//	for (int i = 1; i <= sqrt(n); i++) {
//		int sq = (int)pow(i, 2);
//		for (int j = 1; j <= n; j++) {
//			if (sq <= j) {
//				dp[j] = min(dp[j], dp[j - sq] + 1);
//			}
//		}
//	}
//	
//	cout << dp[n];
//}