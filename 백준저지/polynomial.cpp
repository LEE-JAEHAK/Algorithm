//#include <iostream>
//using namespace std;
//
//long long arr[1000005][2];
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//
//	int n, x;
//	cin >> n >> x;
//	for (int i = 0; i <= n; i++) {
//		cin >> arr[i][0] >> arr[i][1];
//	}
//
//	long long tmp = arr[0][0];
//	long long ans = 0;
//	for (int i = 0; i < n; i++) {
//		tmp = tmp * x + arr[i + 1][0];
//		tmp %= (1000000007);
//	}
//
//	cout << tmp;
//}