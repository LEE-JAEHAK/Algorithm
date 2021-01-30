//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//	vector<string> answer;
//	for (auto i : course) {
//		vector<int> v;
//		int num = 26 - i;
//		for (int j = 0; j < num; j++)v.push_back(0);
//		for (int j = 0; j < i; j++)v.push_back(1);
//		int maxx = 0;
//		string maxtmp;
//		map<string, int> MAP;
//		if (i == 10) {
//			for (int k = 0; k < orders.size(); k++) {
//				if (orders[k].size() == 10) {
//					sort(orders[k].begin(), orders[k].end());
//					MAP[orders[k]]++;
//				}
//			}
//			for (auto i : MAP) {
//				if (maxx <= i.second && i.second >= 2)maxx = i.second;
//			}
//			for (auto i : MAP) {
//				if (i.second == maxx) {
//					answer.push_back(i.first);
//				}
//			}
//			sort(answer.begin(), answer.end());
//			break;
//		}
//		do {
//			string tmp;
//			for (int j = 0; j < 26; j++) {
//				if (v[j] == 1)tmp.push_back('A' + j);
//			}
//			int ordertime = 0;
//			for (int j = 0; j < orders.size(); j++) {
//				int cnt = 0;
//				for (int k = 0; k < orders[j].size(); k++) {
//					for (int m = 0; m < tmp.size(); m++) {
//						if (orders[j][k] == tmp[m]) {
//							cnt++;
//							break;
//						}
//					}
//
//				}
//				if (cnt == i) {
//					ordertime++;
//				}
//			}
//			if (maxx <= ordertime && ordertime >= 2) {
//				maxx = ordertime;
//				maxtmp = tmp;
//				MAP[tmp] = ordertime;
//			}
//
//		} while (next_permutation(v.begin(), v.end()));
//		for (auto i : MAP) {
//			if (i.second == maxx)answer.push_back(i.first);
//		}
//		sort(answer.begin(), answer.end());
//		//cout << maxtmp << endl;
//	}
//	return answer;
//}
//
//int main() {
//	//for (auto i : solution({ "ABCDEFGXYZ","ABCDEFGXYZ","ABCDEFGXYZ",
//	//	"ABCDEFGXYZ","AAAAAAAXWY", "WXA" }, { 10 })) {
//	//	cout << i << ' ';
//	//}
//	//cout << endl;
//	for (auto i : solution({ "ABCFG", "AC", "CDE", "ACDE", "BCFG", "ACDEH" }, { 2,3,4 })) {
//		cout << i << ' ';
//	}
//	cout << endl;
//	for (auto i : solution({ "ABCDE", "AB", "CD", "ADE", "XYZ", "XYZ", "ACD" }, { 2,3,5 })) {
//		cout << i << ' ';
//	}
//	cout << endl;
//	for (auto i : solution({ "XYZ", "XWY", "WXA" }, { 2,3,4 })) {
//		cout << i << ' ';
//	}
//	cout << endl;
//}