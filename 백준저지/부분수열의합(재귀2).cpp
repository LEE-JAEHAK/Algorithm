//#include <iostream>
//using namespace std;
//
//int n;
//int arr[22];
//bool ans[10000002];
//
//void solve(int idx, int sum) {
//	if (idx == n + 1) { ans[sum] = 1; return; }
//	//cout << sum << ' ';
//	solve(idx + 1, sum + arr[idx]);
//	solve(idx + 1, sum);
//}
//
//int main() {
//	cin >> n;
//	int su = 0;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		su += arr[i];
//	}
//	solve(0, 0);
//	for (int i = 0; i <= su + 1; i++) {
//		if (ans[i] == 0) {
//			cout << i << ' ';
//			return 0;
//		}
//	}
//}