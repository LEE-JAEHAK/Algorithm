//#include <bits/stdc++.h>
//using namespace std;
//#define endl '\n'
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
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		int a;
//		cin >> a;
//		cout << (upper_bound(v.begin(), v.end(), a) - v.begin())
//			- (lower_bound(v.begin(), v.end(), a) - v.begin()) << ' ';
//	}
//}