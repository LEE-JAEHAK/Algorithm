//#include <bits/stdc++.h>
//using namespace std;
//
//long long arr[10005];
//
//int main() {
//	int k, n;
//	cin >> k >> n;
//	long long left = 1, right = 0;
//	long long mid = 0;
//	for (int i = 0; i < k; i++) {
//		cin >> arr[i];
//		right = max(arr[i], right);
//	}
//	long long maxx = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		int sum = 0;
//		for (int i = 0; i < k; i++) {
//			sum += arr[i] / mid;
//		}
//		if (sum < n) {
//			right = mid - 1;
//		}
//		else {
//			left = mid + 1;
//			maxx = max(maxx, mid);
//		}
//	}
//	cout << maxx;
//}