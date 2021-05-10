//#include <bits/stdc++.h>
//using namespace std;
//
//string solution(int n, int k, vector<string> cmd) {
//	string answer = "";
//	vector<int> v;
//	int now = k;
//	for (int i = 0; i < n; i++) {
//		v.push_back(i);
//	}
//	//auto cursor = v.begin();
//	//for (int i = 0; i < k; i++) {
//	//	cursor++;
//	//}
//	stack<pair<int,int>> q;
//	//queue<list<int>::iterator> vv;
//	for (int i = 0; i < cmd.size(); i++) {
//		if (cmd[i][0] == 'U') {
//			string s = cmd[i].substr(2);
//			int num = stoi(s);
//			now -= num;
//			//for (int i = 0; i < num; i++)cursor--;
//		}
//		else if (cmd[i][0] == 'D') {
//			string s = cmd[i].substr(2);
//			int num = stoi(s);
//			now += num;
//			//for (int i = 0; i < num; i++)cursor++;
//		}
//		else if (cmd[i][0] == 'C') {
//			q.push({ now,v[now] });
//			//auto tmp = cursor;
//			//vv.push(cursor);
//			//int a = distance(v.begin(), cursor);
//			//int b = distance(v.begin(), v.end());
//			if (now == v.size() - 1) {
//				//auto tmp = --cursor;
//				//cursor++;
//				v.pop_back();
//				//cursor = tmp;
//				now--;
//			}
//			else {
//				//auto tmp = ++cursor;
//				//cursor--;
//				v.erase(v.begin() + now);
//				//cursor = tmp;
//			}
//		}
//		else if (cmd[i][0] == 'Z') {
//			//list<int>::iterator it = vv.front();
//			//if (distance(v.begin(), it) >= distance(v.begin(), v.end())) {
//			//	v.insert(v.end(), 1);
//			//}
//			//else {
//			//	v.insert(it, 1);
//			//	if (distance(v.begin(), it) <= distance(v.begin(), cursor)) {
//			//		cursor++;
//			//	}
//			//}
//			int here = q.top().first;
//			int val = q.top().second;
//			q.pop();
//			if (here >= v.size()) {
//				v.push_back(val);
//			}
//			else {
//				v.insert(v.begin() + here, val);
//				if (here <= now) {
//					now++;
//				}
//			}
//		}
//		//cout << now << ' ';
//	}
//	int idx = 0;
//	for (int i = 0; i < v.size(); i++) {
//		if (v[i] == idx) {
//			answer.push_back('O');
//		}
//		else {
//			answer.push_back('X');
//			i--;
//		}
//		idx++;
//		cout << v[i] << ' ';
//	}
//	return answer;
//}
//
//int main() {
//	cout << solution(8, 2, { "D 2","C","U 3","C","D 4","C","U 2","Z","Z" });
//	//cout << solution(8, 2, { "D 2","C","U 3","C","D 4","C","U 2","Z","Z","U 1","C" });
//
//}