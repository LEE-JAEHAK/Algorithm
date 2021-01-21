//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//string s;
//stack<int> st;
//vector<pair<int, int>> v;
//vector<int> p;
//vector<string> str;
//
//void recursive(int idx) {
//	if (idx == v.size()) {
//		if (p.empty())return;
//		string tmp = s;
//		for (int i = 0; i < p.size(); i++) {
//			tmp[v[p[i]].first] = '#';
//			tmp[v[p[i]].second] = '#';
//		}
//		tmp.erase(std::remove(tmp.begin(), tmp.end(), '#'), tmp.end());
//		str.push_back(tmp);
//		return;
//	}
//	p.push_back(idx);
//	recursive(idx + 1);
//	p.pop_back();
//	recursive(idx + 1);
//}
//
//int main() {
//	cin >> s;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == '(') {
//			st.push(i);
//		}
//		else if (s[i] == ')') {
//			v.push_back(make_pair(st.top(), i));
//			st.pop();
//		}
//	}
//	recursive(0);
//	sort(str.begin(), str.end());
//	str.erase(unique(str.begin(), str.end()), str.end());
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << endl;
//	}
//}