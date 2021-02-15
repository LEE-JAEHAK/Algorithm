//#include <bits/stdc++.h>
//using namespace std;
//
//int n, l;
//int MAP[105][105];
//
//int main() {
//	cin >> n >> l;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			cin >> MAP[i][j];
//		}
//	}
//
//	int ans = 0;
//	bool flag = 0;
//	for (int i = 1; i <= n; i++) {
//		int same = 1;
//		flag = 0;
//		for (int j = 2; j <= n; j++) {
//			if (flag == 1) {
//				same = 0;
//				//if (l == 1)same--;
//			}
//			flag = 0;
//			if (MAP[i][j] != MAP[i][j - 1]) {
//				if (abs(MAP[i][j] - MAP[i][j - 1]) != 1) {
//					break;
//				}
//				else { // 1차이 나면
//					if (MAP[i][j] > MAP[i][j - 1]) {
//						if (same < l)break;
//						else same = 1;
//					}
//					else { // 뒤에거가 더 작으면
//						flag = 1;
//						int k = l - 1;
//						while (k--) {
//							j++;
//							if (MAP[i][j] != MAP[i][j - 1]) {
//								flag = 0;
//								goto there;
//							}
//						}
//
//					}
//				}
//			}
//			else { //같으면
//				same++;
//			}
//
//			if (j >= n)ans++;
//		}
//	there:;
//	}
//
//	//cout << ans << endl;
//
//	flag = 0;
//	for (int j = 1; j <= n; j++) {
//		int same = 1;
//		flag = 0;
//		for (int i = 2; i <= n; i++) {
//			if (flag == 1) {
//				same = 0;
//				//if (l == 1)same--;
//			}
//			flag = 0;
//			if (MAP[i][j] != MAP[i - 1][j]) {
//				if (abs(MAP[i][j] - MAP[i - 1][j]) != 1) {
//					break;
//				}
//				else { // 1차이 나면
//					if (MAP[i][j] > MAP[i - 1][j]) {
//						if (same < l)break;
//						else same = 1;
//					}
//					else { // 뒤에거가 더 작으면
//						flag = 1;
//						int k = l - 1;
//						while (k--) {
//							i++;
//							if (MAP[i][j] != MAP[i - 1][j]) {
//								flag = 0;
//								goto there2;
//							}
//						}
//
//					}
//				}
//			}
//			else { //같으면
//				same++;
//			}
//
//			if (i >= n)ans++;
//		}
//	there2:;
//	}
//
//	cout << ans;
//}