//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arrr[105][505];
//int arr[505];
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	n = 1;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arrr[i][j];
//		}
//	}
//	int ans = 0, cnt = 0;
//	while (cnt < n) {
//		for (int i = 0; i < m; i++) {
//			arr[i] = arr[i] + arrr[cnt][i];
//		}
//		cnt++;
//		int left = 0, right = 0;
//		while (1) {
//			if (arr[left] <= arr[left + 1]) {
//				left++;
//			}
//			else break;
//		}
//		right = left + 2;
//
//		while (1) {
//			if (arr[right] < arr[right + 1])right++;
//			else {
//				int minn = min(arr[left], arr[right]);
//				for (int i = left + 1; i < right; i++) {
//					ans = ans + (minn - arr[i]);
//					arr[i] = minn;
//				}
//				left = right;
//				right = left + 2;
//			}
//			if (right >= m)break;
//		}
//	}
//	cout << ans;
//}