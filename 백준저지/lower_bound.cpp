//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int minn = 1e9;
//vector<int> v;
//
//int main() {
//	int n;
//	cin >> n;
//	v.resize(n);
//	for (int i = 0; i < n; i++)cin >> v[i];
//	sort(v.begin(), v.end());
//	minn = n;
//	for (int i = 0; i <= n; i++) {
//		int tmp = lower_bound(v.begin(), v.end(), i + 1) - v.begin();
//		minn = min(minn, i + n - tmp);
//	}
//	cout << minn;
//}