//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int arr[10005];
//
//int main() {
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	int s = 0, e = 0, sum = 0, ans=0;
//	while (1) {
//		if (sum >= m) sum -= arr[s++];
//		else if (e == n)break;
//		else sum += arr[e++];
//		if (sum == m)ans++;
//	}
//	cout << ans;
//}