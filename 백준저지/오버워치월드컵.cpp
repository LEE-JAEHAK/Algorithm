//#include <iostream>
//using namespace std;
//
//char arr[28][28];
//int alp[92];
//
//int main() { // 65 90
//	int n;
//	while (cin >> n) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> arr[i][j];
//			}
//		}
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				alp[arr[i][j]]++;
//			}
//		}
//
//		char tmp1, tmp2;
//		bool flag = 1;
//		for (int i = 65; i <= 90; i++) {
//			if (alp[i] == 1) { 
//				tmp1 = i; 
//				flag = 1; 
//			}
//			if (alp[i] == n - 1)
//				tmp2 = i;
//			if (alp[i] == n + 1) 
//			{
//				tmp1 = i;
//				flag = 0; 
//			}
//		}
//		if (flag) {
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					if (arr[i][j] == tmp1) {
//						cout << i + 1 << ' ' << j + 1 << ' ' << tmp2 << '\n';
//					}
//				}
//			}
//		}
//		else {
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < n; j++) {
//					if (arr[i][j] == tmp1) {
//						int cnt = 0;
//						for (int k = 0; k < n; k++) {
//							if (arr[i][k] == tmp1)cnt++;
//							if (arr[k][j] == tmp1)cnt++;
//						}
//						if (cnt == 4)cout << i + 1 << ' ' << j + 1 << ' ' << tmp2 << '\n';
//					}
//				}
//			}
//		}
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				arr[i][j] = ' ';
//			}
//		}
//		for (int i = 65; i <= 90; i++) {
//			alp[i] = 0;
//		}
//	}
//}