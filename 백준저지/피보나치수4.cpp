//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//string dp[10001];
//
//string add(string a, string b) { // 12146 1237
//	int size = max(a.length(), b.length()); // 5 8
//	bool carry = 0;
//	string ans(size, '0');
//	for (int i = 0; i < size; i++) {
//		int tmp = carry;
//		carry = 0;
//
//		if (i < a.length()) {
//			tmp += a[a.length() - 1 - i] - '0';
//		}
//		if (i < b.length()) {
//			tmp += b[b.length() - 1 - i] - '0';
//		}
//		if (tmp >= 10) {
//			tmp -= 10;
//			carry = 1;
//		}
//
//		ans[ans.length() - i - 1] = tmp + '0';
//
//	}
//	if (carry) {
//		ans.insert(ans.begin(), '1');
//	}
//	return ans;
//}
//int main() {
//	int n;
//	cin >> n;
//	dp[0] = '0';dp[1] = '1';
//	for (int i = 2; i <= n; i++) {
//		dp[i] = add(dp[i - 1], dp[i - 2]);
//	}
//	cout << dp[n];
//}