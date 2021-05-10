//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//int arr[25][25];
//
//int main() {
//	cin >> n;
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		cin >> arr[i][j];
//	//	}
//	//}
//	int x = 2, y = 5, d1 = 3, d2 = 2;
//	for (int i = 1; i < x + d1; i++) {
//		for (int j = 1; j <= y; j++) {
//			arr[i][j] = 1;
//		}
//	}
//	for (int i = 1; i <= x + d2; i++) {
//		for (int j = y + 1; j <= n; j++) {
//			arr[i][j] = 2;
//		}
//	}
//	for (int i = x + d1; i <= n; i++) {
//		for (int j = 1; j < y - d1 + d2; j++) {
//			arr[i][j] = 3;
//		}
//	}
//	for (int i = x + d2 + 1; i <= n; i++) {
//		for (int j = y - d1 + d2; j <= n; j++) {
//			arr[i][j] = 4;
//		}
//	}
//
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}