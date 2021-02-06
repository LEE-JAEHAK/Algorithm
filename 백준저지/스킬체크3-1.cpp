//#include <bits/stdc++.h>
//using namespace std;
//
//int TIME[1500];
//
//bool POSS(int n, int t, int m, priority_queue<int> q, int basis) {
//	int start = 540;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (q.empty())goto exit;
//			if (-q.top() <= start) {
//				q.pop();
//			}
//		}
//		start += t;
//	}
//exit:;
//	if (q.empty())return 1;
//	else {
//		if (-q.top() <= basis)return 0;
//	}
//	return 1;
//}
//
//string solution(int n, int t, int m, vector<string> timetable) {
//	string answer = "";
//	int maxx = 0;
//	for (int k = 0; k <= 1357; k++) {
//		priority_queue<int> q;
//		q.push(-k);
//		for (auto i : timetable) {
//			int s1 = stoi(i.substr(0, 2));
//			int s2 = stoi(i.substr(3, 2));
//			q.push(-(s1 * 60 + s2));
//		}
//		if (POSS(n, t, m, q, k)) {
//			maxx = max(maxx, k);
//		}
//	}
//	string s1 = to_string(maxx / 60);
//	string s2 = to_string(maxx % 60);
//	if (s1.size() == 1)s1 = "0" + s1;
//	if (s2.size() == 1)s2 = "0" + s2;
//	answer = s1 + ":" + s2;
//	return answer;
//}
//
//int main() {
//	//cout << solution(1, 1, 5, { "08:00", "08:01", "08:02", "08:03" }) << endl;
//	cout << solution(2, 10, 2, { "09:10", "09:09", "08:00"}) << endl;
//	//cout << solution(2, 1, 2, { "08:00", "08:01", "08:02", "08:03" }) << endl;
//	//cout << solution(1, 1, 5, { "08:00", "08:01", "08:02", "08:03" }) << endl;
//	//cout << solution(1, 1, 1, { "08:00" }) << endl;
//	//cout << solution(10, 60, 45, { "08:00", "08:01", "08:02", "08:03" }) << endl;
//
//}