//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int l, c;
//vector<char> v;
//vector<char> vv;
//vector<string> vvv;
//int cnt;
//
//void go(int idx, int cnt) {
//	if (idx > c)return;
//	if (cnt == l) {
//		int mo = 0, ja = 0;
//		string s;
//		for (int i = 0; i < vv.size(); i++) {
//			if (vv[i] == 'a' || vv[i] == 'e' || vv[i] == 'i' || vv[i] == 'o' || vv[i] == 'u')mo++;
//			else ja++;
//			s.push_back(vv[i]);
//		}
//		if (mo >= 1 && ja >= 2)
//			vvv.push_back(s);
//		return;
//	}
//	vv.push_back(v[idx]);
//	go(idx + 1, cnt + 1);
//	vv.pop_back();
//	go(idx + 1, cnt);
//}
//
//int main() {
//	cin >> l >> c;
//	v.resize(c);
//	for (int i = 0; i < c; i++)cin >> v[i];
//	sort(v.begin(), v.end());
//	v.push_back(' ');
//	go(0, 0);
//	//sort(vvv.begin(), vvv.end());
//	vvv.erase(unique(vvv.begin(), vvv.end()), vvv.end());
//	for (int i = 0; i < vvv.size(); i++)cout << vvv[i] << '\n';
//}