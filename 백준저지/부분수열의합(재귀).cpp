//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n, s;
//vector<int> v;
//int cnt;
//void solve(int idx, int sum) {
//	if (idx == n && sum == s) {
//		cnt++;
//		return;
//	}
//	if (idx == n && sum != s)return;
//	solve(idx + 1, sum + v[idx]);
//	solve(idx + 1, sum);
//}
//
//int main() {
//	cin >> n >> s;
//	v.resize(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	solve(0, 0);
//	if (s == 0)cnt -= 1;
//	cout << cnt;
//}