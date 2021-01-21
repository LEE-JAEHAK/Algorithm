//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, p, e;
//vector<pair<int, int>> v;
//vector<bool> perm;
//int ans[20] = {};
//bool flag = 0;
//
//int main() {
//	ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	for (int i = 0; i < 20; i++)ans[i] = 0;
//	cin >> n >> p >> e;
//	if (p > n) { cout << -1; return 0; }
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back(make_pair(a, b));
//	}
//	perm.resize(n);
//	for (int i = 0; i < p; i++) {
//		perm[i] = 1;
//	}
//	sort(perm.begin(), perm.end());
//	do {
//		int minn = 0, maxx = 0;
//		for (int i = 0; i < n; i++) {
//			if (perm[i] == 1) {
//				minn += v[i].first;
//				maxx += v[i].second;
//			}
//		}
//		if (minn <= e && e <= maxx) {
//			for (int i = 0; i < n; i++) {
//				if (perm[i] == 1) {
//					ans[i] = v[i].first;
//				}
//			}
//			int tmp = e - minn;
//			for (int i = 0; i < n; i++) {
//				if (perm[i] == 1) {
//					int gap = v[i].second - v[i].first;
//					if (tmp >= gap) {
//						ans[i] += gap;
//						tmp -= gap;
//					}
//					else {
//						ans[i] += tmp;
//						tmp = 0;
//					}
//				}
//			}
//			for (int i = 0; i < n; i++)cout << ans[i] << ' ';
//			flag = 1;
//			return 0;
//		}
//	} while (next_permutation(perm.begin(), perm.end()));
//	cout << -1;
//	return 0;
//}