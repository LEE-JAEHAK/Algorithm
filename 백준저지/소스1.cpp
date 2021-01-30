//#include <bits/stdc++.h>
//using namespace std;
//
//struct MAN {
//	string a;
//	string b;
//	string c;
//	string d;
//	string e;
//	bool operator <(const MAN& other) {
//		if (a == other.a) {
//			if (b == other.b) {
//				if (c == other.c) {
//					if (d == other.d) {
//						return e < other.e;
//					}
//					else return d < other.d;
//				}
//				else return c < other.c;
//			}
//			else return b < other.b;
//		}
//		else return a < other.a;
//	}
//};
//vector<MAN> v;
//vector<int> memo[3][2][2][2];
//vector<int> solution(vector<string> info, vector<string> query) {
//	vector<int> answer;
//	for (auto i : info) {
//		istringstream ss(i);
//		string buf;
//		string s[5];
//		int cnt = 0;
//		while (getline(ss, buf, ' ')) {
//			s[cnt++] = buf;
//		}
//		v.push_back({ s[0],s[1],s[2],s[3],s[4] });
//	}
//	sort(v.begin(), v.end());
//	for (auto i : v)cout << i.a << ' ' << i.b << ' ' << i.c << ' ' << i.d << ' ' << i.e << endl;
//	return answer;
//}
//
//int main() {
//	solution({ "java backend junior pizza 150",
//		"python frontend senior chicken 210",
//		"python frontend senior chicken 150",
//		"cpp backend senior pizza 260",
//		"java backend junior chicken 80",
//		"python backend senior chicken 50" },
//		{ "java and backend and junior and pizza 100",
//		"python and frontend and senior and chicken 200",
//		"cpp and - and senior and pizza 250",
//		"- and backend and senior and - 150",
//		"- and - and - and chicken 100",
//		"- and - and - and - 150" });
//}