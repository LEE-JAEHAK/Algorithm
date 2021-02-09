//#include <bits/stdc++.h>
//using namespace std;
//
//int dp[10005];
//int w[5005];
//int v[5005];
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	while (1) {
//		int n;
//		double m;
//		cin >> n >> m;
//		if (n == 0 && m == 0.00)break;
//		int k = int(m * 100 + 0.5);
//		for (int i = 1; i <= n; i++) {
//			int a;
//			double b;
//			cin >> a >> b;
//			w[i] = a;
//			v[i] = int(b * 100 + 0.5);
//		}
//		for (int i = 1; i <= n; i++) {
//			for (int j = 1; j <= k; j++) {
//				if (j >= v[i]) {
//					dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//				}
//			}
//		}
//		cout << dp[k] << '\n';
//		for (int i = 0; i <= k; i++)dp[i] = 0;
//	}
//}