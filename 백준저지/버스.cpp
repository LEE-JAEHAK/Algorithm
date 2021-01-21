//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Product {
//public:
//	int start, end, value;
//	bool operator <(const Product& other) {
//		if (end == other.end)
//			return start < other.start;
//		else
//			return end < other.end;
//	}
//};
//
//Product p[50010];
//int dp[50010];
//
//int main() {
//	int k, n, c;
//	cin >> k >> n >> c;
//
//	int N = k;
//	for (int i = 0; i < N; i++) {
//		cin >> p[i].start >> p[i].end >> p[i].value;
//	}
//	sort(p, p + N);
//
//	for (int j = 0; j < N; j++) {
//		dp[j] = p[j].value;
//	}
//
//	int cnt = p[0].value;
//	int end = p[0].end;
//	for (int i = 0; i < N; i++) {
//		if (p[i].start >= end) {
//			cnt += p[i].value;
//			end = p[i].end;
//		}
//	}
//	cout << cnt << endl;
//	cnt = 0;
//
//
//	/*for (int i = 0; i < N; i++) {
//		for (int j = i; j < N; j++) {
//			if (p[i].end <= p[j].start) {
//				dp[j] = max(dp[j], dp[i] + p[j].value);
//			}
//		}
//	}
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		ans = max(ans, dp[i]);
//	}
//	cout << ans << "\n";*/
//
//}