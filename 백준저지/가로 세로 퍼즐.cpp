//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//string s[7];
//char arr[4][4];
//vector<int> v = { 0,1,2,3,4,5 };
//
//int main() {
//	for (int i = 0; i < 6; i++) {
//		cin >> s[i];
//	}
//	int ti = 0, tk = 0, cnt = 0;
//	do {
//		for (int i = 0; i < 6; i++) {
//			if (i < 3) {
//				for (int j = 0; j < 3; j++)
//					arr[i][j] = s[v[i]][j];
//			}
//			else {
//				for (int j = 0; j < 3; j++) {
//					if (arr[j][tk] == s[v[i]][j]) {
//						cnt++;
//					}
//				}
//				tk++;
//			}
//		}
//
//		if (cnt == 9) {
//			for (int i = 0; i < 6; i++) {
//				if (i < 3) {
//					cout << s[v[i]] << endl;
//				}
//			}
//			return 0;
//		}
//		ti = 0;tk = 0, cnt = 0;
//	} while (next_permutation(v.begin(), v.end()));
//	cout << cnt;
//}