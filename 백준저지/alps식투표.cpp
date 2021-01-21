//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <map>
//using namespace std;
//map<int, char> m;
//vector<int> v;
//int staff[15];
//char staffc[15];
//bool ansb[95];
//int ans[95];
//bool comp(int a, int b) {
//	return a > b;
//}
//
//int main() {  // 65 90
//	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//	int x;
//	cin >> x;
//	int atleast = x * 0.05;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> staffc[i] >> staff[i];
//		ansb[staffc[i]] = 1;
//		if (staff[i] < atleast) {
//			staff[i] = 0;
//			ansb[staffc[i]] = 0;
//		}
//	}
//	for (int i = 1; i <= 14; i++) {
//		for (int k = 0; k < n; k++) {
//			m[staff[k] / i] = staffc[k];
//			v.push_back(staff[k] / i);
//		}
//	}
//	sort(v.begin(), v.end(), comp);
//	for (int i = 0; i < 14; i++) {
//		ans[m[v[i]]]++;
//	}
//	for (int i = 65; i <= 90; i++) {
//		if (ansb[i] != 0) {
//			cout << (char)i << ' ' << ans[i] << '\n';
//		}
//	}
//}