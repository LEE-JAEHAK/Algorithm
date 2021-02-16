//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	sort(v.begin(), v.end());
//	long long ans = 0;
//	for (int i = n - 1; i >= 0; i--) {
//		double x = v[i] * 0.9;
//		ans += i - (lower_bound(v.begin(), v.end(), x) - v.begin());
//	}
//	cout << ans;
//}