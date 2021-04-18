//#include <bits/stdc++.h>
//using namespace std;
//
//long long n, s;
//long long arr[100'005];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n >> s;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int left = 0, right = 0, minn = 1e9;
//	long long sum = arr[0];
//	while (right < n) {
//		if (sum < s) {
//			right++;
//			sum += arr[right];
//		}
//		else {
//			minn = min(minn, right - left + 1);
//			sum -= arr[left];
//			left++;
//		}
//	}
//	if (minn == 1e9)cout << 0;
//	else cout << minn;
//}