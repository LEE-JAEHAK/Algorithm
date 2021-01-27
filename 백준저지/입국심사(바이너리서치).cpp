//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n, m;
//	cin >> n >> m;
//	vector<long long> v(n);
//	long long maxx = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//		maxx = max(maxx, v[i]);
//	}
//	sort(v.begin(), v.end());
//	maxx *= m;
//	long long minn = 1;
//	long long ans = 1e18;
//	while (minn <= maxx) {
//		long long mid = (maxx + minn) / 2;
//		long long sum = 0;
//		for (auto i : v)sum += mid / i;
//		if (sum >= m) {
//			ans = min(ans, mid);
//			maxx = mid - 1;
//		}
//		else {
//			minn = mid + 1;
//		}
//	}
//	cout << ans;
//}