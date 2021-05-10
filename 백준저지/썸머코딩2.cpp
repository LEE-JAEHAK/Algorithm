//#include <bits/stdc++.h>
//using namespace std;
//
//
//vector<int> solution(vector<int> t, vector<int> r) {
//	vector<int> answer;
//	vector<pair<pair<int, int>, int>> v;
//	for (int i = 0; i < t.size(); i++) {
//		v.push_back({ {t[i], r[i]}, i });
//	}
//	sort(v.begin(), v.end());
//	//for (auto i : v)cout << i.second << endl;
//	int tt = v.size();
//	while (tt--) {
//		answer.push_back(v[0].second);
//		int k = v[0].first.first;
//		v.erase(v.begin());
//
//		int num=0;
//		for (int i = 0; i < v.size(); i++) {
//			if (k != v[i].first.first) {
//				num = v[i].first.first;
//				break;
//			}
//		}
//		for (int i = 0; i < v.size(); i++) {
//			if (k == v[i].first.first) {
//				v[i].first.first = num;
//			}
//			else break;
//		}
//		sort(v.begin(), v.end());
//	}
//	return answer;
//}
//
//int main() {
//	for (auto i : solution({ 0,1,3,0 }, { 0,1,2,3 }))cout << i << ' ';
//	//for (auto i : solution({ 7,6,8,1 }, { 3,1,0,2 }))cout << i << ' ';
//
//}