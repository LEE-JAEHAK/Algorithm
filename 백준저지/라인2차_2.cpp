//#include <bits/stdc++.h>
//using namespace std;
//
//vector<bool> solution(string program, vector<string> flag_rules, vector<string> commands) {
//	vector<bool> answer;
//
//	map<string, string> MAP; // flag�� ���� flag argument ���� 
//	for (auto i : flag_rules) {
//		istringstream ss(i);
//		string buf;
//		string lan[3];
//		int idx = 0;
//		while (getline(ss, buf, ' ')) { // �������� ���ø� 
//			lan[idx++] = buf;
//		}
//		MAP[lan[0]] = lan[1]; // MAP["-s"] = "STRING"  
//	}
//
//	for (auto i : commands) {
//		bool flag = 1;
//		istringstream ss(i);
//		string buf;
//		vector<string> lan;
//		int idx = 0;
//		while (getline(ss, buf, ' ')) { // �������� ���ø� 
//			lan.push_back(buf);
//		}
//
//		if (program != lan[0]) { answer.push_back(0); continue; } // program�� �ٸ��� �ٷ� false
//		for (int j = 1; j < lan.size(); j++) { // �������� ���� commands 
//			if (lan[j][0] != '-' && lan[j - 1][0] != '-') { // flag argument �տ� flag�� ���� ���
//				answer.push_back(0);
//				goto out;
//			}
//			if (MAP[lan[j]] == "STRINGS") { // STRINGS �� ���
//				while (j < lan.size() && lan[j + 1][0] != '-') {
//					j++;
//					for (auto k : lan[j]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
//						if (('a' <= k && k <= 'z') || ('A' <= k && k <= 'Z'))continue;
//						answer.push_back(0);
//						goto out;
//					}
//				}
//			}
//			if (MAP[lan[j]] == "STRING") { // STRING �� ���
//				for (auto k : lan[j + 1]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
//					if (('a' <= k && k <= 'z') || ('A' <= k && k <= 'Z'))continue;
//					flag = 0;
//					break;
//				}
//			}
//			if (MAP[lan[j]] == "NUMBERS") { // NUMBERS �� ���
//				while (j < lan.size() && lan[j + 1][0] != '-') {
//					j++;
//					for (auto k : lan[j]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
//						if ('0' <= k && k <= '9')continue;
//						answer.push_back(0);
//						goto out;
//					}
//				}
//			}
//			if (MAP[lan[j]] == "NUMBER") { // NUMBER �� ���
//				for (auto k : lan[j + 1]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
//					if ('0' <= k && k <= '9')continue;
//					flag = 0;
//					break;
//				}
//			}
//			if (MAP[lan[j]] == "NULL") { // NULL �� ��� 
//				if (j == lan.size() - 1)continue; // argument�� ���� �� �����Ƿ� �� �ڿ��̰ų�
//				if (lan[j + 1][0] == '-')continue; // �ڿ��� �ٷ� flag ���� �� 
//				flag = 0;
//				break;
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
//	//for (auto i : solution("line", { "-s STRINGS", "-n NUMBERS", "-e NULL" },
//	//	{ "line -n 100 102 -s hi -e", "line -n id pwd -n 100" }))cout << i << ' ';
//
//	for (auto i : solution("trip", { "-days NUMBERS", "-dest STRING" },
//		{ "trip -days 15 10 -dest Seoul Paris", "trip -days 10 -dest Seoul" }))cout << i << ' ';
//}