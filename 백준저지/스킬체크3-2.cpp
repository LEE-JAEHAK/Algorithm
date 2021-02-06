//#include <bits/stdc++.h>
//using namespace std;
//
//bool compare(pair<int, int> v1, pair<int, int> v2) {
//	if (v1.second == v2.second)return v1.first < v1.first;
//	else return v1.second > v2.second;
//}
//
//bool compare2(pair<string, int> v1, pair<string, int> v2) {
//	return v1.second > v2.second;
//}
//
//vector<int> solution(vector<string> genres, vector<int> plays) {
//	vector<int> answer;
//	map<string, int, greater<>> MAP;
//	for (int i = 0; i < genres.size(); i++) {
//		MAP[genres[i]] += plays[i];
//	}
//	vector<pair<string, int>> tmp(MAP.begin(), MAP.end());
//	sort(tmp.begin(), tmp.end(),compare2);
//	for (auto i : tmp) {
//		//cout << i.first << ' ' << i.second << endl;
//		vector<pair<int, int>> v;
//		for (int j = 0; j < genres.size(); j++) {
//			if (genres[j] == i.first) {
//				v.push_back({ j,plays[j] });
//			}
//		}
//		sort(v.begin(), v.end(), compare);
//		int cnt = 0;
//		for (auto k : v) {
//			answer.push_back(k.first);
//			cnt++;
//			if (cnt == 2)break;
//			//cout << k.first << ' ' << k.second << endl;
//		}
//	}
//	return answer;
//}
//
//int main() {
//	for (auto i : solution({ "classic", "pop", "classic", "classic", "pop", "classic","classic" },
//		{ 500, 600, 150, 800, 2500, 10000, 800 })) {
//		cout << i << ' ';
//	}
//}