//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n;
//int a[102];
//int maxi = -1e9, mini = 1e9;
//
//void solve(int idx, int ans, int pl, int mi, int mu, int di) {
//	if (idx == n) {
//		maxi = max(maxi, ans);
//		mini = min(mini, ans);
//		//cout << ans << endl;
//		return;
//	}
//	if (pl > 0)
//		solve(idx + 1, ans + a[idx], pl - 1, mi, mu, di);
//	if (mi > 0)
//		solve(idx + 1, ans - a[idx], pl, mi - 1, mu, di);
//	if (mu > 0)
//		solve(idx + 1, ans * a[idx], pl, mi, mu - 1, di);
//	if (di > 0)
//		solve(idx + 1, ans / a[idx], pl, mi, mu, di - 1);
//}
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	int pl, mi, mu, di;
//	cin >> pl >> mi >> mu >> di;
//	solve(1, a[0], pl, mi, mu, di);
//	cout << maxi << '\n' << mini;
//}