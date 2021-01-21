//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	string s, a;
//	cin >> s;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == 'X') {
//			int cnt = 0;
//			while (s[i] == 'X') {
//				i++;
//				cnt++;
//			}
//			if (cnt % 2 == 1) {
//				cout << -1;
//				return 0;
//			}
//			else {
//				int A = cnt / 4;
//				int B = cnt % 4;
//				for (int m = 0; m < A; m++) {
//					a += "AAAA";
//				}
//				for (int m = 0; m < B/2; m++) {
//					a += "BB";
//				}
//				i--;
//			}
//		}
//		else {
//			a.push_back('.');
//		}
//	}
//	cout << a;
//}