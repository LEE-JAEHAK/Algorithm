//#include <iostream>
//#include <stack>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	string s, k;
//	cin >> s >> k;
//	string ans;
//	for (int i = 0; i < s.length(); i++) {
//		ans.push_back(s[i]);
//		if (s[i] == k.back()) {
//			int cnt = 0;
//			for (int j = 0; j < k.length(); j++) {
//				if (ans[ans.length() - 1 - j] == k[k.length() - 1 - j]) {
//					cnt++;
//				}
//			}
//			if (cnt == k.length()) {
//				for (int j = 0; j < k.length(); j++)ans.pop_back();
//			}
//		}
//	}
//	if (ans.empty())cout << "FRULA";
//	else cout << ans;
//}