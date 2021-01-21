//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() { //65 90   97 122
//	string s;
//	cin >> s;
//	string t;
//	for (int i = 0; i < s.length(); i++) {
//		if ((65 <= s[i] && s[i] <= 90) || (97 <= s[i] && s[i] <= 122)) {
//			t.push_back(s[i]);
//		}
//	}
//	//cout << t << '\n';
//	string k;
//	cin >> k;
//	int size = k.length();
//	for (int i = 0; i < t.length() - k.length() + 1; i++) {
//		int cnt = 0;
//		for (int j = 0; j < size; j++) {
//			if (t[i + j] == k[j]) {
//				cnt++;
//			}
//		}
//		if (size == cnt) { cout << 1; return 0; }
//	}
//	cout << 0;
//}