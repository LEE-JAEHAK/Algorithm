//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[1'000'005];
//vector<int> v;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0);
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	v.push_back(arr[0]);
//	for (int i = 1; i < n; i++) {
//		int no = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
//		if (v.size() <= no) {
//			v.push_back(arr[i]);
//		}
//		else {
//			v[no] = arr[i];
//		}
//	}
//	cout << v.size();
//}