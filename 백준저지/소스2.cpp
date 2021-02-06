//#include <bits/stdc++.h>
//using namespace std;
//
//bool compare(pair<string, string> v1, pair<string, string> v2) {
//	return v1.second < v2.second;
//}
//
//vector<string> solution(vector<vector<string>> tickets) {
//	vector<string> answer;
//	int sz = tickets.size();
//	answer.push_back("ICN");
//	vector<pair<pair<string, string>, int>> v;
//	for (auto i : tickets) {
//		v.push_back({ {i[0],i[1]},0 });
//	}
//	string next = "ICN";
//	while (sz--) {
//		vector<pair<string, string>> tmp;
//		for (auto i : v) {
//			if (i.first.first == next && i.second == 0) {
//				tmp.push_back({ i.first.first,i.first.second });
//			}
//		}
//		sort(tmp.begin(), tmp.end(), compare);
//		next = tmp.front().second;
//		answer.push_back(next);
//		for (int i = 0; i < v.size(); i++) {
//			if (v[i].first.first == tmp.front().first && v[i].first.second == tmp.front().second) {
//				v[i].second = 1;
//				break;
//			}
//		}
//	}
//
//	return answer;
//}
//
//int main() {
//	for (auto i : solution({ { "ICN", "JFK" },{ "HND", "IAD" }, { "JFK", "HND" },{"IAD","ICN"},{"ICN","JFK"} }))
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//
//}