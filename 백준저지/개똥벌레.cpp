//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//vector<int> v1;
//vector<int> v2;
//int arr[500005];
//
//int main() {
//	int n, h;
//	cin >> n >> h;
//	v1.resize(n / 2); v2.resize(n / 2);
//	for (int i = 0; i < n / 2; i++) {
//		cin >> v1[i] >> v2[i];
//	}
//	sort(v2.begin(), v2.end());
//	sort(v1.begin(), v1.end());
//	int minn = 1e9;
//	for (int i = 1; i <= h; i++) {
//		arr[i] = v2.size() - (lower_bound(v2.begin(), v2.end(), i) - v2.begin());
//		arr[i] += v1.size() - (lower_bound(v1.begin(), v1.end(), h - i + 1) - v1.begin());
//		minn = min(minn, arr[i]);
//	}
//	int cnt = 0;
//	for (int i = 1; i <= h; i++) {
//		if (arr[i] == minn)cnt++;
//	}
//	cout << minn << ' ' << cnt;
//}