//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m;
//long long arr[1000005];
//long long maxx;
//
//long long check(int x) {
//	long long sum = 0;
//	for (int i = 0; i < n; i++) {
//		if (arr[i] - x < 0)continue;
//		sum += arr[i] - x;
//	}
//	return sum;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	long long left = 0, right = 2e9, mid = 1e9;
//	while (left < right) {
//		mid = (left + right) / 2;
//		//cout << left << ' ' << mid << ' ' << right << ' ';
//		if (m > check(mid)) {
//			right = mid;
//		}
//		else {
//			left = mid + 1;
//			maxx = max(maxx, mid);
//		}
//		//cout << check(mid) << endl;
//	}
//	cout << maxx;
//}