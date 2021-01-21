//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int screen[12];
//int loc[22];
//
//int main() {
//	int n, m;
//	cin >> n >> m; // 10 4
//	for (int i = 1; i <= m; i++) {
//		screen[i] = 1;
//	}
//	int apple;
//	cin >> apple; // 3
//	for (int i = 0; i < apple; i++) {
//		cin >> loc[i]; // 1 10 3
//	}
//	int cnt = 0;
//	for (int i = 0; i < apple; i++) { // 1 9 3
//		int dc = 0, uc = 0;
//		int lo = loc[i]; // 9
//		if (screen[lo] == 0) {
//			while (screen[lo] != 1) {
//				if (lo == 0) { dc = 9999;break; }
//				lo--;
//				dc++; // 5
//			}
//			lo = loc[i];
//			while (screen[lo] != 1) {
//				lo++;
//				uc++;
//				if (lo > n) { uc = 9999; break; }
//			}
//			lo = loc[i];
//			if (dc < uc) {
//				cnt += dc;
//				for (int j = 0; j < m; j++) {
//					screen[lo - dc - j] = 0;
//				}
//				for (int j = 0; j < m; j++) {
//					screen[lo - j] = 1;
//				}
//			}
//			else {
//				cnt += uc;
//				for (int j = 0; j < m; j++) {
//					screen[lo + uc + j] = 0;
//				}
//				for (int j = 0; j < m; j++) {
//					screen[lo + j] = 1;
//				}
//			}
//		}
//	}
//	cout << cnt;
//}