//#include <iostream>
//using namespace std;
//
//bool ok[10];
//int ans[10];
//
//void go(int index, int start, int n, int m) { // 0 4 2 	
//	if (index == m) {
//		for (int k = 0; k < m; k++) {
//			cout << ans[k] << ' ';
//		}
//		cout << '\n';
//		return;
//	}
//	for (int i = start; i <= n; i++) {
//		if (ok[i])continue;
//		ans[index] = i;
//		ok[i] = true;
//		go(index + 1, i + 1, n, m);
//		ok[i] = false;
//	}
//}
//int main() {
//	int m, n;
//	cin >> n >> m;
//	go(0, 1, n, m);
//}
//
