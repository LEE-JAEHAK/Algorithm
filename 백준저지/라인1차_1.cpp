//#include <bits/stdc++.h>
//using namespace std;
//
//string solution(vector<string> table, vector<string> languages, vector<int> preference) {
//	string answer = "";
//	map<string, int> MAP;
//	int maxx = 0;
//	vector<int> v;
//	for (int i = 0; i < table.size(); i++) {
//		istringstream ss(table[i]);
//		string buf;
//		string lan[7];
//		int idx = 0;
//		map<string, int> lang;
//		while (getline(ss, buf, ' ')) {
//			lan[idx++] = buf;
//		}
//		lang[lan[1]] = 5;
//		lang[lan[2]] = 4;
//		lang[lan[3]] = 3;
//		lang[lan[4]] = 2;
//		lang[lan[5]] = 1;
//		int sum = 0;
//		for (int j = 0; j < languages.size(); j++) {
//			sum += lang[languages[j]] * preference[j];
//		}
//		v.push_back(sum);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		maxx = max(maxx,v[i]);
//	}
//	vector<string> vv;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i] == maxx) {
//			istringstream ss(table[i]);
//			string buf;
//			string lan[7];
//			int idx = 0;
//			map<string, int> lang;
//			while (getline(ss, buf, ' ')) {
//				lan[idx++] = buf;
//			}
//			vv.push_back(lan[0]);
//		}
//	}
//	sort(vv.begin(), vv.end());
//	answer = vv[0];
//	return answer;
//}
//
//int main() {
//	solution({ "SI JAVA JAVASCRIPT SQL PYTHON C#",
//		"CONTENTS JAVASCRIPT JAVA PYTHON SQL C++",
//		"HARDWARE C C++ PYTHON JAVA JAVASCRIPT",
//		"PORTAL JAVA JAVASCRIPT PYTHON KOTLIN PHP",
//		"GAME C++ C# JAVASCRIPT C JAVA" }, { "PYTHON", "C++", "SQL" }, { 7,5,5 });
//}