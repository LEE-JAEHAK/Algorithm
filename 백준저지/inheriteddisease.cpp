//#include <iostream>
//using namespace std;
//
//int arr[102];
//long long dp[105];
//
//int main() {
//	dp[0] = 1;
//	for (int i = 1; i < 101; i++) {
//		dp[i] = dp[i - 1] * i % 1000000007;
//	}
//
//	int d;
//	cin >> d;
//	for (int i = 1; i <= d; i++)cin >> arr[i];
//	long long self = 1, left = 0, right = 0;
//
//	cout << 1 << '\n';
//	for (int i = 2; i <= d; i++) { // 1 2 1
//		self = (self + left * i + right + arr[i]) % 1000000007;
//		left = (left * i + arr[i] - 1) % 1000000007;
//		right = (right * i + (i - arr[i])) % 1000000007;
//		cout << self << '\n';
//	}
//
//}