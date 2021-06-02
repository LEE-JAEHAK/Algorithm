//#include <bits/stdc++.h>
//using namespace std;
//
//vector<pair<int, int>> vv;
//vector<int> v;
//int dp[500005];
//
//int main() {
//	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		vv.push_back({ a,b });
//	}
//	sort(vv.begin(), vv.end());
//	v.push_back(vv[0].second);
//	for (int i = 1; i < vv.size(); i++) {
//		if (vv[i].second > v.back()) {
//			v.push_back(vv[i].second);
//			dp[i] = v.size() - 1;
//		}
//		else {
//			int tmp = lower_bound(v.begin(), v.end(), vv[i].second) - v.begin();
//			v[tmp] = vv[i].second;
//			dp[i] = tmp;
//		}
//	}
//	int k = v.size() - 1;
//	for (int i = vv.size() - 1; i >= 0; i--) { 
//		if (dp[i] == k) {
//			dp[i] = 1e6;
//			k--;
//		}
//	}
//	cout << n - v.size() << '\n';
//	for (int i = 0; i < vv.size(); i++) {
//		if (dp[i] != 1e6) {
//			cout << vv[i].first << '\n';
//		}
//	}
//}