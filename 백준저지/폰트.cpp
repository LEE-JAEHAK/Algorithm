//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int sum[30];
//int ans;
//int cnt;
//
//void DFS(int total, int idx) {
//	if (idx == n) {
//		cnt++;
//		if (total == (1 << 26) - 1) {
//			ans++;
//		}
//		return;
//	}
//	DFS(total | sum[idx], idx + 1);
//	DFS(total, idx + 1);
//}
//
//int main() {
//	cin >> n;
//	string s[30];
//	for (int i = 0; i < n; i++) {
//		cin >> s[i];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < s[i].size(); j++) {
//			sum[i] |= 1 << (s[i][j] - 'a');
//		}
//	}
//	DFS(0, 0);
//	//cout << cnt << endl;
//	cout << ans;
//}