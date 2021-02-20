//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	vector<long long> v(n);
//	for (int i = 0; i < n; i++)cin >> v[i];
//	sort(v.begin(), v.end());
//	//if (n == 1) {
//	//	if (m == 0) {
//	//		cout << 1;
//	//	}
//	//	else cout << 0;
//	//	return 0;
//	//}
//	int left = 0, right = 0;
//	long long minn = 2e9;
//	while (right < n) {
//		if (v[right] - v[left] >= m) {
//			minn = min(minn, v[right] - v[left]);
//			left++;
//		}
//		else {
//			right++;
//		}
//		if (left >= n)break;
//	}
//	cout << minn;
//}