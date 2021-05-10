//#include <bits/stdc++.h>
//using namespace std;
//
//vector<long long> v;
//
//int main() {
//	int n;
//	cin >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//
//	double sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += v[i];
//	}
//	sum /= n;
//	cout << round(sum) << endl;
//
//	sort(v.begin(), v.end());
//	cout << v[n / 2] << endl;
//
//	map<int, int> m;
//	for (int i = 0; i < n; i++) {
//		m[v[i]]++;
//	}
//	int maxx = 0;
//	for (auto i : m) {
//		maxx = max(maxx, i.second);
//	}
//	vector<int> vv;
//	for (auto i : m) {
//		if (maxx == i.second) {
//			vv.push_back(i.first);
//		}
//	}
//	sort(vv.begin(), vv.end());
//	if (vv.size() >= 2)cout << vv[1] << endl;
//	else cout << vv[0] << endl;
//
//	cout << v[n - 1] - v[0];
//}