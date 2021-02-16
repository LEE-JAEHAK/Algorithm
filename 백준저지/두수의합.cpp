//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++)cin >> v[i];
//	sort(v.begin(), v.end());
//	int left = 0, right = n - 1, ans = 0;
//	int x;
//	cin >> x;
//	// 1 2 3 5 7 10 11 12
//	while (left < right) {
//		if (v[left] + v[right] == x) {
//			ans++;
//			left++;
//			right--;
//		}
//		else if (v[left] + v[right] < x) {
//			left++;
//		}
//		else {
//			right--;
//		}
//	}
//	cout << ans;
//}