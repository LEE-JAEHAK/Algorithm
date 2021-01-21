//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n;
//vector<long long int> v;
//
//long long int f(long long int x) {
//	long long res = 0;
//	for (int i = 0; i < n; i++) {
//		res += abs(x * i - v[i]);
//	}
//	return res;
//}
//
//int main() {
//	cin >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	long long int left = 0, right = v[n - 1];
//	while (right - left >= 3) {
//		int p = (left * 2 + right) / 3;
//		int q = (left + right * 2) / 3;
//		if (f(p) < f(q)) {
//			right = q;
//		}
//		else
//			left = p;
//	}
//
//	long long int ans = 1e18;
//	for (int i = left; i <= right; i++)
//		ans = min(f(i), ans);
//	cout << ans;
//}