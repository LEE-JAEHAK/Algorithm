//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//string arr[51];
//int N;
//int check() {
//	int ans = 1, cnt = 1;
//	for (int i = 0; i < N; i++) {
//		cnt = 1;
//		for (int j = 1; j < N; j++) {
//			if (arr[i][j] == arr[i][j - 1]) {
//				cnt++;
//			}
//			else {
//				cnt = 1;
//			}
//			if (ans < cnt)ans = cnt;
//		}
//		cnt = 1;
//		for (int j = 1; j < N; j++) {
//			if (arr[j][i] == arr[j - 1][i]) {
//				cnt++;
//			}
//			else {
//				cnt = 1;
//			}
//			if (ans < cnt)ans = cnt;
//		}
//	}
//	return ans;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//	}
//	int ans = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (j + 1 < N) {
//				swap(arr[i][j], arr[i][j + 1]);
//				int temp = check();
//				if (ans < temp)ans = temp;
//				swap(arr[i][j], arr[i][j + 1]);
//			}
//			if (i + 1 < N) {
//				swap(arr[i][j], arr[i + 1][j]);
//				int temp = check();
//				if (ans < temp)ans = temp;
//				swap(arr[i][j], arr[i + 1][j]);
//			}
//		}
//	}
//	cout << ans;
//}