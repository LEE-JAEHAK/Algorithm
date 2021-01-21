//#include <iostream>
//#include <vector>
//using namespace std;
//
//int n, m, arr[10]; // 4 2
//bool check[10];
//void recur(int idx) {
//	if (idx == m) {
//		for (int i = 0; i < m; i++)cout << arr[i] << ' ';
//		cout << '\n';
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (check[i] == 0) {
//			arr[idx] = i;
//			check[i] = 1;
//			recur(idx + 1);
//			check[i] = 0;
//		}
//	}
//}
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n >> m;
//	recur(0);
//}