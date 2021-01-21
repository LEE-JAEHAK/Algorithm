//#include <iostream>
//#include <string>
//using namespace std;
//
//string palin(string s) {
//	int sz = s.length() - 1;
//	sz /= 2;
//	string ret(s);
//	for (int i = 0; i <= sz; i++) {
//		ret[s.length() - 1 - i] = s[i];
//	}
//	return ret;
//}
//
//string pluss(string s) {
//	int back = s.length() - 1;
//	if (s[back] != '9') {
//		s[back]++;
//		return s;
//	}
//	else {
//		for (int i = back; i > 0; i--) {
//			s[i] = '0';
//			if (s[i - 1] == '9') {
//				if (i == 1) {
//					s[i - 1] = '0';
//					s = "1" + s;
//					return s;
//				}
//				else
//					continue;
//			}
//			else {
//				s[i - 1]++;
//				return s;
//			}
//		}
//	}
//}
//
//int main() { // 65 90    // 12345   12346  12321  12421  12349 : 9999 10000 
//	string s;
//	cin >> s;
//	if (s == "9")s = "10";
//	else s = pluss(s);
//	string tmp = palin(s);
//	if (tmp >= s) {
//		cout << tmp;
//		return 0;
//	}
//	else {
//		int sz = tmp.length();
//		string tmp2 = tmp.substr(0, (sz - 1) / 2 + 1);
//		tmp2 = pluss(tmp2);
//		for (int i = 0; i < tmp2.length(); i++) {
//			tmp[i] = tmp2[i];
//			tmp[tmp.length() - 1 - i] = tmp2[i];
//		}
//		cout << tmp;
//		return 0;
//	}
//}