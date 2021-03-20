//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> solution(string inp_str) {
//	vector<int> answer;
//	if (inp_str.size() < 8 || inp_str.size() > 15)answer.push_back(1);
//	bool flag=0, flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0;
//	for (auto i : inp_str) {
//		if ('A' <= i && i <= 'Z') { flag1 = 1;continue; }
//		if ('a' <= i && i <= 'z') { flag2 = 1; continue; }
//		if ('0' <= i && i <= '9') { flag3 = 1;continue; }
//		if (i == '~' || i == '!' || i == '@' || i == '#' ||
//			i == '$' || i == '%' || i == '^' || i == '&' || i == '*') {
//			flag4 = 1;continue;
//		}
//		flag = 1;
//	}
//	if (flag == 1)answer.push_back(2);
//	if (flag1 + flag2 + flag3 + flag4 < 3)answer.push_back(3);
//	int cnt = 1;
//	bool flagf=0;
//	for (int i = 1; i < inp_str.size(); i++) {
//		if (inp_str[i] == inp_str[i - 1])cnt++;
//		else cnt = 1;
//		if (cnt >= 4)flagf = 1;
//	}
//	if (flagf == 1)answer.push_back(4);
//
//	map<char, int> MAP;
//	for (int i = 0; i < inp_str.size(); i++) {
//		MAP[inp_str[i]]++;
//	}
//	for (auto i : MAP) { 
//		if (i.second >= 5) {
//			answer.push_back(5);
//			break;
//		}
//	}
//
//	if (answer.empty())answer.push_back(0);
//	return answer;
//}
//
//int main() {
//	for (auto i : solution("AaTa+!12-3"))cout << i << ' ';
//	cout << endl;
//	for (auto i : solution("aaaaZZZZ)"))cout << i << ' ';
//	cout << endl;
//
//	for (auto i : solution("CaCbCgCdC888834A"))cout << i << ' ';
//	cout << endl;
//	for (auto i : solution("UUUUU"))cout << i << ' ';
//	cout << endl;
//	for (auto i : solution("ZzZz9Z824"))cout << i << ' ';
//	cout << endl;
//
//}