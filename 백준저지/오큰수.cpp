//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[1000005];
//int dp[1000005];
//
//int main() { // 3 5 2 7   /  9 5 4 8
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	stack<int> s;
//	s.push(0);
//
//	for (int i = 1; i < n; i++) {
//		if (s.empty())s.push(i);
//		while (!s.empty() && arr[s.top()] < arr[i]) {
//			dp[s.top()] = arr[i];
//			s.pop();
//		}
//		s.push(i);
//	}
//	while (!s.empty()) {
//		dp[s.top()] = -1;
//		s.pop();
//	}
//	for (int i = 0; i < n; i++) {
//		cout << dp[i] << ' ';
//	}
//}