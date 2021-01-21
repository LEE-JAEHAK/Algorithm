//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//int ques[105];
//int qsnum[105];
//int n, m;
//
//int count(int num) {
//	int cnt = 0;
//	while (num) {
//		cnt += num & 1;
//		num >>= 1;
//	}
//	return cnt;
//}
//
//int btod(string num) {
//	int p = 0, ret = 0;
//	for (int i = num.length() - 1; i >= 0; i--) {
//		if (num[i] == '1') { // 1010
//			ret += 1 << p;
//		}
//		p++;
//	}
//	return ret;
//}
//
//string dtob(int num) {
//	string ret;
//	for (int i = 0; i < n; i++) {
//		ret.insert(0, 1, (num & 1) + '0');
//		num >>= 1;
//	}
//	return ret;
//}
//
//int main() {
//	cin >> n >> m;
//	for (int i = 0; i < m; i++) {
//		string a;
//		cin >> a >> qsnum[i];
//		ques[i] = btod(a);
//	}
//	int ans = 0, anscnt = 0, unicheck = 0;
//	for (int i = 0; i < 1 << n; i++) {
//		anscnt = 0;
//		for (int j = 0; j < m; j++) {
//			if (count(ques[j] & i) != qsnum[j]) {
//				goto cont;
//			}
//			else
//				anscnt++;
//		}
//	cont:;
//		if (anscnt == m) {
//			ans = i;
//			unicheck++;
//		}
//		if (unicheck > 1) {
//			cout << "NOT UNIQUE";
//			return 0;
//		}
//		if (i == (1 << n) - 1 && unicheck == 0) {
//			cout << "IMPOSSIBLE";
//			return 0;
//		}
//	}
//	string s = dtob(ans);
//	cout << s;
//}