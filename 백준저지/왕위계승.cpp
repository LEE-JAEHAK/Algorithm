//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//map<string, vector <string>> fam;
//map<string, double> bl;
//
//double DFS(string s) {
//	if (fam[s].empty())return bl[s];
//	if (bl[s] != 0)return bl[s];
//	string p1 = fam[s][0];
//	string p2 = fam[s][1];
//	double ret = (DFS(p1) + DFS(p2)) / 2;
//	return bl[s] = ret;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//	int n, m;
//	cin >> n >> m;
//	string king;
//	cin >> king;
//	bl[king] = 1;
//	for (int i = 0; i < n; i++) {
//		string ch, p1, p2;
//		cin >> ch >> p1 >> p2;
//		fam[ch].push_back(p1);
//		fam[ch].push_back(p2);
//	}
//	double maxi = 0;
//	string tmp;
//	for (int i = 0; i < m; i++) {
//		string s;
//		cin >> s;
//		double ans = DFS(s);
//		if (maxi < ans) {
//			maxi = ans;
//			tmp = s;
//		}
//	}
//	cout << tmp;
//}