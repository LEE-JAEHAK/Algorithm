//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	stack <char> s;
//	string a;
//	getline(cin, a);
//	int flag = 0;
//	int tmp = 0, cnt=0;
//	for (int i = 0; i < a.size(); i++) {
//		if (i == 0) {
//			if (a[i] == ')' || a[i] == '}' || a[i] == ']' || a[i] == '>') {
//				tmp = 0;
//				break;
//			}
//		}
//		if (a[i] == '(' || a[i] == '{' || a[i] == '[' || a[i] == '<') { cnt++; s.push(a[i]); }
//		else {
//			if (a[i] == ')') {
//				if (s.empty()) {
//					tmp = i;
//					flag = 2;
//					break;
//				}
//				if (s.top() != '(') {
//					tmp = i;
//					flag = 1;
//					break;
//				}
//				else { 
//					 s.pop(); 
//				}
//			}
//			if (a[i] == '}') {
//				if (s.empty()) {
//					tmp = i;
//					flag = 2;
//					break;
//				}
//				if (s.top() != '{') {
//					tmp = i;
//					flag = 1;
//					break;
//				}
//				else { s.pop();
//				}
//			}
//			if (a[i] == ']') {
//				if (s.empty()) {
//					tmp = i;
//					flag = 2;
//					break;
//				}
//				if (s.top() != '[') {
//					tmp = i;
//					flag = 1;
//					break;
//				}
//				else { s.pop();
//				}
//			}
//			if (a[i] == '>') {
//				if (s.empty()) {
//					tmp = i;
//					flag = 2;
//					break;
//				}
//				if (s.top() != '<') {
//					tmp = i;
//					flag = 1;
//					break;
//				}
//				else {
//					 s.pop();
//				}
//			}
//		}
//	}
//	if (flag == 1) {
//		cout << -tmp;
//	}
//	else if (!s.empty() && flag == 0) {
//		int n = a.size() - 1;
//		cout << -n;
//	}
//	else if (s.empty() && flag ==0) {
//		cout << cnt;
//	}
//	else if (s.empty() && flag == 0) {
//		cout << 0;
//	}
//	else {
//		cout << -tmp;
//	}
//	return 0;
//}