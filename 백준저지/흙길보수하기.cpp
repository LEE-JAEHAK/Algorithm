//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<pair<int, int>> v;
//
//int main() {
//	int n, l;
//	cin >> n >> l;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back(make_pair(a, b));
//	}
//	sort(v.begin(), v.end());
//	int idx = 0, ans = 0;
//	for (int i = 0; i < v.size(); i++) {
//		int a = v[i].first, b = v[i].second;
//		idx = max(a, idx);
//		if (b <= idx)continue;
//		//cout << a << ' ' << b << endl;
//		int cnt = (b - idx - 1) / l + 1;
//		ans += cnt;
//		idx += l * cnt;
//	}
//	cout << ans;
//}