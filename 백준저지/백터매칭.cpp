//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int t;
//	cin >> t;
//	while (t--) {
//		int n;
//		cin >> n;
//		vector<pair<int, int>> vv;
//		vector<int> v;
//		for (int i = 0; i < n / 2; i++)v.push_back(0);
//		for (int i = 0; i < n / 2; i++)v.push_back(1);
//		for (int i = 0; i < n; i++) {
//			int a, b;
//			cin >> a >> b;
//			vv.push_back({ a,b });
//		}
//		double minn = 1e9;
//		do {
//			int a = 0, b = 0, c = 0, d = 0;
//			for (int i = 0; i < v.size(); i++) {
//				if (v[i] == 0) {
//					a += vv[i].first;
//					b += vv[i].second;
//				}
//				else if (v[i] == 1) {
//					a -= vv[i].first;
//					b -= vv[i].second;
//				}
//			}
//			double ans = sqrt(pow(a, 2) + pow(b, 2));
//			minn = min(minn, ans);
//		} while (next_permutation(v.begin(), v.end()));
//		cout << setprecision(7) << fixed << minn << '\n';
//	}
//}