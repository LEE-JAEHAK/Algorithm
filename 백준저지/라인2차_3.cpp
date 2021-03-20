#include <bits/stdc++.h>
using namespace std;

vector<bool> solution(string program, vector<string> flag_rules, vector<string> commands) {
	vector<bool> answer;

	map<string, string> MAP; // flag�� ���� flag argument ���� 
	map<string, int> ALIAS; // ���� �ߺ� ���� 
	for (auto i : flag_rules) {
		istringstream ss(i);
		string buf;
		string lan[3];
		int idx = 0;
		while (getline(ss, buf, ' ')) { // �������� ���ø� 
			lan[idx++] = buf;
		}
		if (lan[1] == "ALIAS") {
			MAP[lan[0]] = lan[2];
			ALIAS[lan[0]] = 1;
			ALIAS[lan[2]] = 1;
		}
		else MAP[lan[0]] = lan[1]; // MAP["-s"] = "STRING"  
	}

	for (auto i : commands) {
		bool flag = 1;
		istringstream ss(i);
		string buf;
		vector<string> lan;
		int idx = 0;
		while (getline(ss, buf, ' ')) { // �������� ���ø� 
			lan.push_back(buf);
		}

		if (program != lan[0]) { answer.push_back(0); continue; } // program�� �ٸ��� �ٷ� false
		for (int j = 1; j < lan.size(); j++) { // �������� ���� commands 
			string control = MAP[lan[j]];
			if (ALIAS[control] > 0)ALIAS[control]++;
			if (MAP[lan[j]][0] == '-') {
				control = MAP[MAP[lan[j]]];
				ALIAS[control]++;
			}
			if (lan[j][0] != '-' && lan[j - 1][0] != '-') { // flag argument �տ� flag�� ���� ���
				answer.push_back(0);
				goto out;
			}
			if (control == "STRINGS") { // STRINGS �� ���
				while (j < lan.size() && lan[j + 1][0] != '-') {
					j++;
					for (auto k : lan[j]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
						if (('a' <= k && k <= 'z') || ('A' <= k && k <= 'Z'))continue;
						answer.push_back(0);
						goto out;
					}
					if (j + 1 >= lan.size())break;
				}
			}
			if (control == "STRING") { // STRING �� ���
				for (auto k : lan[j + 1]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
					if (('a' <= k && k <= 'z') || ('A' <= k && k <= 'Z'))continue;
					flag = 0;
					break;
				}
			}
			if (control == "NUMBERS") { // NUMBERS �� ���
				while (lan[j + 1][0] != '-' && j < lan.size()) {
					j++;
					for (auto k : lan[j]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
						if ('0' <= k && k <= '9')continue;
						answer.push_back(0);
						goto out;
					}
					if (j + 1 >= lan.size())break;
				}
			}
			if (control == "NUMBER") { // NUMBER �� ���
				for (auto k : lan[j + 1]) { // flag argument�� ��ȸ�ؼ� ������ �����ϴ��� Ȯ�� 
					if ('0' <= k && k <= '9')continue;
					flag = 0;
					break;
				}
			}
			if (control == "NULL") { // NULL �� ��� 
				if (j == lan.size() - 1)continue; // argument�� ���� �� �����Ƿ� �� �ڿ��̰ų�
				if (lan[j + 1][0] == '-')continue; // �ڿ��� �ٷ� flag ���� �� 
				flag = 0;
				break;
			}
		}
		if (flag)answer.push_back(1);
		else answer.push_back(0);
	out:;
	}
	return answer;
}

int main() {
	//for (auto i : solution("line", { "-s STRING", "-num NUMBER", "-e NULL", "-n ALIAS -num" },
	//	{ "line -n 100 -s hi -e", "line -n 100 -e -num 150" }))cout << i << ' ';

	for (auto i : solution("bank", { "-send STRING", "-a ALIAS -amount", "-amount NUMBERS" },
		{ "bank -send abc -amount 500 200 -a 400", "bank -send abc -a hey" }))cout << i << ' ';
}