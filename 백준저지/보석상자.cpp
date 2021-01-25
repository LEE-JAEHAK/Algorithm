//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n, m;
//	cin >> n >> m;
//	v.resize(m);
//	int maxx = 0;
//	for (int i = 0; i < m; i++) {
//		cin >> v[i];
//		maxx = max(v[i], maxx);
//	}
//	int minn = 1;
//	int ans = 1e9;
//	while (minn <= maxx) {
//		int x = (minn + maxx) / 2;
//		int sum = 0;
//		for (int i = 0; i < v.size(); i++) {
//			sum += v[i] / x;
//			if (v[i] % x)sum += 1;
//		}
//		//if (sum == n) { cout << x; break; }
//		if (sum <= n) {
//			ans = min(ans, x);
//			maxx = x - 1;
//		}
//		else {
//			minn = x + 1;
//		}
//	}
//	cout << ans;
//}