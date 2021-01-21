//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//#include <string>
//using namespace std;
//
//map<string, string> parent;
//int n, m;
//
//string find(string x) {
//	if (parent[x] == x)return x;
//	else return parent[x] = find(parent[x]);
//}
//
//void merge(string x, string y, int no) {
//	string org1 = x, org2 = y;
//	x = find(x);
//	y = find(y);
//	if (no == 1)swap(x, y);
//	if (x == y) {
//		parent[org1] = org1;
//		parent[org2] = org2;
//		if (no == 1)swap(org1, org2);
//		parent[org1] = org2;
//	}
//	else
//		parent[x] = y;
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		string a, b, c;
//		cin >> a >> b >> c;
//		parent[c] = c;
//	}
//	for (int i = 0; i < m; i++) {
//		string a, b, c, d, e;
//		cin >> a >> b >> c >> d >> e;
//		string tmp1, tmp2;
//		for (int j = 0; j < c.size(); j++) {
//			if (c[j] == ',')break;
//			tmp1.push_back(c[j]);
//		}
//		for (int j = 0; j < e.size(); j++) {
//			if (e[j] == ',')break;
//			tmp2.push_back(e[j]);
//		}
//		int no = e[e.size() - 1] - '0';
//		merge(tmp1, tmp2, no);
//	}
//	map<string, int> ans;
//	map<string, string>::iterator it;
//	for (it = parent.begin(); it != parent.end(); it++) ans[find(it->first)] = 1;
//	map<string, int>::iterator it2;
//	int cnt = 0;
//	for (it2 = ans.begin(); it2 != ans.end(); it2++)cnt++;
//	cout << cnt << '\n';
//	for (it2 = ans.begin(); it2 != ans.end(); it2++)cout << "Kingdom of " << it2->first << '\n';
//}