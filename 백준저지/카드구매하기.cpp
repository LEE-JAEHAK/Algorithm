//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int P[10001];
//int dp[10001];
//
//int main() {
//	int N;
//	cin >> N;
//	for (int i = 1; i <= N; i++) {
//		cin >> P[i];
//	}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= i; j++) {
//			dp[i] = max(dp[i], dp[i - j] + P[j]);
//		}	
//	}
//
//	cout << dp[N];
//}
