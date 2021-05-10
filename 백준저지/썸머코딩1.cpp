//#include <bits/stdc++.h>
//using namespace std;
//
//bool compare(pair<int, int> a, pair<int, int> b) {
//	return a.second < b.second;
//}
//
//vector<int> solution(string code, string day, vector<string> data) {
//	vector<int> answer;
//	vector<pair<int,int>> v;
//	for (int i = 0; i < data.size(); i++) {
//		string a, b, c;
//		istringstream ss(data[i]);
//		ss >> a >> b >> c;
//		string s = b.substr(5);
//		if (code == s && day == c.substr(5,8)) {
//			v.push_back({ stoi(a.substr(6)), stoi(c.substr(5))});
//		}
//	}
//	sort(v.begin(), v.end(), compare);
//
//	for (auto i : v)answer.push_back(i.first);
//	return answer;
//}
//
//int main() {
//	for (auto i : solution("012345", "20190620",
//		{ "price=80 code=987654 time=2019062113",
//		"price=90 code=012345 time=2019062014",
//		"price=120 code=987654 time=2019062010",
//		"price=110 code=012345 time=2019062009",
//		"price=95 code=012345 time=2019062111" })) {
//		cout << i << ' ';
//	}
//}