//#include <bits/stdc++.h>
//using namespace std;
//
//int balance(string s) {
//	stack<int> ss;
//	char ch = s[0];
//	int memo = 0;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == ch)ss.push(1);
//		else ss.pop();
//		if (ss.empty()) {
//			memo = i;
//			break;
//		}
//	}
//	return memo + 1;
//}
//
//bool correct(string s) {
//	stack<int> st;
//	char ch = s[0];
//	if (ch == ')')return 0;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == '(')st.push(1);
//		else {
//			if (st.empty())return 0;
//			st.pop();
//		}
//	}
//	if (st.empty())return 1;
//	else return 0;
//
//}
//
//string recur(string s) {
//	if (s == "")return s;
//	int idx = balance(s);
//	string u = s.substr(0, idx);
//	string v = s.substr(idx);
//	if (correct(u))return u + recur(v);
//	else {
//		string tmp = "(";
//		tmp += recur(v);
//		tmp += ")";
//		u.erase(0, 1);
//		u.pop_back();
//		for (int i = 0; i < u.length(); i++) {
//			if (u[i] == '(')u[i] = ')';
//			else u[i] = '(';
//		}
//		tmp += u;
//		return tmp;
//	}
//}
//
//string solution(string p) {
//	string answer = "";
//	answer = recur(p);
//	return answer;
//}
//
//int main() {
//	cout << solution("(()())()") << endl;
//	cout << solution(")(") << endl;
//	cout << solution("()))((()") << endl;
//}