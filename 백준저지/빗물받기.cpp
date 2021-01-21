//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[505];
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> arr[i];
//	}
//	int ans = 0;
//	for (int i = 0; i < m; i++) {
//		int left = i - 1, right = i + 1;
//		int leftmax = 0, rightmax = 0;
//		while (0 <= left) {
//			if (arr[left] > arr[i])
//				leftmax = max(leftmax, arr[left]);
//			left--;
//		}
//		while (right < m) {
//			if (arr[right] > arr[i])
//				rightmax = max(rightmax, arr[right]);
//			right++;
//		}
//		int std = min(leftmax, rightmax);
//		if (std > arr[i])
//			ans += (std - arr[i]);
//	}
//	cout << ans;
//}