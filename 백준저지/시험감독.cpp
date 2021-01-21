//#include <iostream>
//using namespace std;
//
//int arr[1'000'005];
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)cin >> arr[i];
//	int a, b;
//	cin >> a >> b;
//	long long ans = n;
//	for (int i = 0; i < n; i++) {
//		arr[i] = arr[i] - a;
//		if (arr[i] > 0) {
//			if (arr[i] % b == 0) {
//				ans += (arr[i] / b);
//			}
//			else {
//				ans += (arr[i] / b) + 1;
//			}
//		}
//	}
//	cout << ans;
//}