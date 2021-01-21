//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int arr[100002];
//
//int main() {
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	int n, m, p;
//	cin >> n >> m >> p;
//	for (int i = 1; i <= n; i++) {
//		int a, b;
//		cin >> a >> b;
//		if (arr[b] == 0)
//			arr[b] = a;
//	}
//	int cnt = 0;
//	while (arr[p] != 0) {
//		cnt++;
//		if (cnt > 1e5) {
//			cout << -1;
//			return 0;
//		}
//		p = arr[p];
//	}
//	cout << cnt;
//}