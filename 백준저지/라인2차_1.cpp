//#include <bits/stdc++.h>
//using namespace std;
//
//vector<bool> solution(string program, vector<string> flag_rules, vector<string> commands) {
//	vector<bool> answer;
//
//	map<string, string> MAP; // flag에 따른 flag argument 저장 
//	for (auto i : flag_rules) {
//		istringstream ss(i);
//		string buf;
//		string lan[3];
//		int idx = 0;
//		while (getline(ss, buf, ' ')) { // 공백으로 스플릿 
//			lan[idx++] = buf;
//		}
//		MAP[lan[0]] = lan[1]; // MAP[-s] = "STRING"  
//	}
//
//	for (auto i : commands) {
//		bool flag = 1;
//		istringstream ss(i);
//		string buf;
//		vector<string> lan;
//		int idx = 0;
//		while (getline(ss, buf, ' ')) { // 공백으로 스플릿 
//			lan.push_back(buf);
//		}
//
//		if (program != lan[0]) { answer.push_back(0); continue; } // program이 다르면 바로 false
//		for (int j = 1; j < lan.size(); j++) { // 공백으로 나뉜 commands 
//			if (lan[j][0] != '-' && lan[j - 1][0] != '-') { // flag argument 앞에 flag가 없을 경우
//				answer.push_back(0); 
//				goto out; 
//			}
//			if (MAP[lan[j]] == "STRING") { // STRING 인 경우
//				for (auto k : lan[j + 1]) { // flag argument를 순회해서 조건을 만족하는지 확인 
//					if (('a' <= k && k <= 'z') || ('A' <= k && k <= 'Z'))continue;
//					flag = 0;
//					break;
//				}
//			}
//			if (MAP[lan[j]] == "NUMBER") { // NUMBER 인 경우
//				for (auto k : lan[j + 1]) { // flag argument를 순회해서 조건을 만족하는지 확인 
//					if ('0' <= k && k <= '9')continue;
//					flag = 0;
//					break;
//				}
//			}
//			if (MAP[lan[j]] == "NULL") { // NULL 인 경우 
//				if (j == lan.size() - 1)continue; // argument를 받을 수 없으므로 맨 뒤에이거나
//				if (lan[j + 1][0] == '-')continue; // 뒤에가 바로 flag 여야 함 
//				flag = 0;
//			}
//		}
//		if (flag)answer.push_back(1);
//		else answer.push_back(0);
//	out:;
//	}
//	return answer;
//}
//
//int main() {
//	//for (auto i : solution("line", { "-s STRING", "-n NUMBER", "-e NULL" },
//	//	{ "line -n 100 -s hi -e", "lien -s Bye" }))cout << i << ' ';
//
//	for (auto i : solution("line", { "-s STRING", "-n NUMBER", "-e NULL" },
//		{ "line -s 123 -n HI", "line fun" }))cout << i << ' ';
//}