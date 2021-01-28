//#include <bits/stdc++.h>
//using namespace std;
//
//string step1(string s) {
//	for (int i = 0; i < s.length(); i++) {
//		if ('A' <= s[i] && s[i] <= 'Z')s[i] += ('a' - 'A');
//	}
//	return s;
//}
//string step2(string s) {
//	string tmp;
//	for (int i = 0; i < s.length(); i++) {
//		if (('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')
//			|| s[i] == '-' || s[i] == '_' || s[i] == '.') {
//			tmp += s[i];
//		}
//	}
//	return tmp;
//}
//string step3(string s) {
//	string tmp;
//	if (s.size() == 0)return s;
//	tmp += s[0];
//	for (int i = 1; i < s.length(); i++) {
//		if (s[i] == '.' && s[i] == s[i - 1]) {
//			continue;
//		}
//		tmp += s[i];
//	}
//	return tmp;
//}
//string step4(string s) {
//	if (s.size() == 0)return s;
//	if (s[0] == '.')s.erase(0,1);
//	if (s.size() == 0)return s;
//	if (s[s.size() - 1] == '.')s.pop_back();
//	return s;
//}
//string step5(string s) {
//	if (s.size() == 0)s = "a";
//	return s;
//}
//string step6(string s) {
//	if (s.size() > 15) {
//		s.erase(s.begin() + 15, s.end());
//		if (s.back() == '.')s.pop_back();
//	}
//	return s;
//}
//string step7(string s) {
//	if (s.size() < 3) {
//		char tmp = s.back();
//		while (s.size() < 3) {
//			s += tmp;
//		}
//	}
//	return s;
//}
//
//string solution(string new_id) {
//	string answer = "";
//	answer = step1(new_id);
//	answer = step2(answer);
//	answer = step3(answer);
//	answer = step4(answer);
//	answer = step5(answer);
//	answer = step6(answer);
//	answer = step7(answer);
//	return answer;
//}
//
//int main() {
//	cout << solution("...!@BaT#*..y.abcdefghijklm") << endl;
//	cout << solution("z-+.^.") << endl;
//	cout << solution("=.=") << endl;
//	cout << solution("123_.def") << endl;
//	cout << solution("abcdefghijklmn.p") << endl;
//}