//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<long long> gt(12);
//bool check[12];
//int n, m, ans, realans = 1e9;
//
//int cntbit(long long sum) {
//	int cnt = 0;
//	while (sum) {
//		cnt += sum & 1;
//		sum = sum >> 1;
//	}
//	return cnt;
//}
//
//void recursive(long long sum, int idx) {
//	if (idx == n) {
//		int cb = cntbit(sum);
//		int cnt = 0;
//		if (ans <= cb) {
//			ans = cb;
//			for (int i = 0; i < n; i++)
//				if (check[i] != 0)
//					cnt++;
//			realans = min(realans, cnt);
//		}
//		return;
//	}
//	check[idx] = 1;
//	recursive(sum | gt[idx], idx + 1);
//	check[idx] = 0;
//	recursive(sum, idx + 1);
//}
//bool exc = 0;
//int main() {
//	cin >> n >> m;
//	gt.resize(n);
//	for (int i = 0; i < n; i++) {
//		string s;
//		long long num = 0;
//		cin >> s;
//		for (int j = 0; j < m; j++) {
//			char c;
//			cin >> c;
//			if (c == 'Y') {
//				exc = 1;
//				num |= (long long)1 << j;
//			}
//		}
//		gt[i] = num;
//	}
//	if (exc == 0) {
//		cout << -1;
//		return 0;
//	}
//	recursive(0, 0);
//	cout << realans;
//}