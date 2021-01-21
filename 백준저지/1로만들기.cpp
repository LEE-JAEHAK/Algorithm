//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dp[1000001];
//
//int recursive(int n) {
//	if (n == 0)return 0;
//	else {
//		return dp[n] = min(dp[n - 1], dp[n / 3], dp[n / 2]) + 1;
//	}
//}
//
//int main() {
//	int N;
//	cin >> N; // 10
//
//	dp[1] = 0;
//	for (int i = 2; i <= N; i++) {
//		dp[i] = dp[i - 1] + 1;
//		if(i%2==0 && )
//		dp[i] = min(dp[i - 1], dp[i / 3], dp[i / 2]) + 1;
//	}
//
//	cout << dp[N];
//}
