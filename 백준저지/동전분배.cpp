//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<pair<int, int>> v;
//int dp[101][100001];
//
//int main() {
//	int tc = 3;
//	while (tc--) {
//		/*	for (int i = 0; i < 101; i++) {
//				for (int j = 0; j < 100001; j++) {
//					dp[i][j] = 1e7;
//				}
//			}*/
//		int n, sum = 0;
//		cin >> n;
//		v.push_back(make_pair(0, 0));
//		for (int i = 1; i <= n; i++) {
//			int a, b;
//			cin >> a >> b;
//			sum += a * b;
//			v.push_back(make_pair(a, b));
//		}
//		sort(v.begin(), v.end());
//		for (int i = 1; i < v.size(); i++) {
//			for (int j = 0; j <= sum; j++) {
//				dp[i][j] = dp[i - 1][j];
//				if (v[i].first <= j)
//				{
//					dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i].first] + 1);
//				}
//			}
//		}
//		for (int i = 0; i <= n; i++) {
//			for (int j = 0; j <= sum; j++) {
//				cout << dp[i][j] << ' ';
//			}
//			cout << '\n';
//		}
//
//	}
//}