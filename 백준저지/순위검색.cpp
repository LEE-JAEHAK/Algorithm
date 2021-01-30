//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> memo[3][2][2][2];
//
//vector<int> solution(vector<string> info, vector<string> query) {
//	vector<int> answer;
//	for (auto i : info) {
//		istringstream ss(i);
//		string buf;
//		int s[5];
//		int cnt = 0;
//		while (getline(ss, buf, ' ')) {
//			if (cnt == 4) { s[cnt] = stoi(buf); break; }
//			int no = 0;
//			if (buf == "cpp")no = 0;
//			if (buf == "java")no = 1;
//			if (buf == "python")no = 2;
//			if (buf == "backend")no = 0;
//			if (buf == "frontend")no = 1;
//			if (buf == "junior")no = 0;
//			if (buf == "senior")no = 1;
//			if (buf == "chicken")no = 0;
//			if (buf == "pizza")no = 1;
//			s[cnt++] = no;
//		}
//		memo[s[0]][s[1]][s[2]][s[3]].push_back(s[4]);
//	}
//	for (auto i : query) {
//		istringstream ss(i);
//		string buf;
//		int s[5];
//		int cnt = 0;
//		while (getline(ss, buf, ' ')) {
//			int no = -1;
//			if (buf == "-")no = 10;
//			else if (buf == "cpp")no = 0;
//			else if (buf == "java")no = 1;
//			else if (buf == "python")no = 2;
//			else if (buf == "backend")no = 0;
//			else if (buf == "frontend")no = 1;
//			else if (buf == "junior")no = 0;
//			else if (buf == "senior")no = 1;
//			else if (buf == "chicken")no = 0;
//			else if (buf == "pizza")no = 1;
//			else if (buf != "and")no = stoi(buf);
//			if (no != -1) {
//				s[cnt++] = no;
//			}
//		}
//		int ans = 0;
//		for (int a = 0; a < 3; a++) {
//			if (s[0] != 10 && s[0] != a)continue;
//			for (int b = 0; b < 2; b++) {
//				if (s[1] != 10 && s[1] != b)continue;
//				for (int c = 0; c < 2; c++) {
//					if (s[2] != 10 && s[2] != c)continue;
//					for (int d = 0; d < 2; d++) {
//						if (s[3] != 10 && s[3] != d)continue;
//						for (auto k : memo[a][b][c][d]) {
//							if (k >= s[4])ans++;
//						}
//					}
//				}
//			}
//		}
//		answer.push_back(ans);
//	}
//	return answer;
//}
//
//int main() {
//	solution({ "java backend junior pizza 150",
//		"python frontend senior chicken 210",
//		"python frontend senior chicken 150",
//		"cpp backend senior pizza 260",
//		"java backend junior chicken 80",
//		"python backend senior chicken 50"
//		},
//		{ "java and backend and junior and pizza 100",
//		"python and frontend and senior and chicken 200",
//		"cpp and - and senior and pizza 250",
//		"- and backend and senior and - 150",
//		"- and - and - and chicken 100",
//		"- and - and - and - 150"
//		});
//}