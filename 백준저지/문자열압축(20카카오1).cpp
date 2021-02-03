//#include <bits/stdc++.h>
//using namespace std;
//
//int sol(int n, string s) {
//	int idx = 0;
//	int ans = 0;
//	while (idx < s.length()) {
//		int cnt = 1;
//		string tmp = s.substr(idx, n);
//		if (tmp.size() < n) {
//			ans += tmp.size();
//			break;
//		}
//		if (tmp == s.substr(idx + n, n)) {
//			while (tmp == s.substr(idx+n, n)) {
//				idx += n;
//				cnt++;
//			}
//			idx += n;
//		}
//		else {
//			idx += n;
//		}
//		if (cnt == 1)ans += n;
//		if (1 < cnt && cnt < 10)ans += n + 1;
//		if (10 <= cnt && cnt <= 99)ans += n + 2;
//		if (100 <= cnt && cnt <= 999)ans += n + 3;
//
//	}
//	return ans;
//}
//
//int solution(string s) {
//	int answer = s.length();
//	for (int i = 1; i <= s.length() / 2; i++) {
//		answer = min(answer, sol(i, s));
//	}
//	return answer;
//}
//
//int main() {
//	cout << solution("aabbaccc") << endl;
//
//	cout << solution("ababcdcdababcdcd") << endl;
//	cout << solution("abcabcdede") << endl;
//	cout << solution("abcabcabcabcdededededede") << endl;
//	cout << solution("xababcdcdababcdcd") << endl;
//}
