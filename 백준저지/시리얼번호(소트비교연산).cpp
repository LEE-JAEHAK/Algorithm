//#include <bits/stdc++.h>
//using namespace std;
//
//bool compare(string s1, string s2) {
//	if (s1.length() < s2.length())return 1;
//	else if (s1.length() > s2.length())return 0;
//	else if (s1.length() == s2.length()) {
//		int sum1 = 0, sum2 = 0;
//		for (int i = 0; i < s1.length(); i++) {
//			if ('0' <= s1[i] && s1[i] <= '9')sum1 += s1[i] - '0';
//		}
//		for (int i = 0; i < s2.length(); i++) {
//			if ('0' <= s2[i] && s2[i] <= '9')sum2 += s2[i] - '0';
//		}
//		if (sum1 < sum2)return 1;
//		else if (sum1 > sum2)return 0;
//		else {
//			return s1 < s2;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n;
//	cin >> n;
//	vector<string> v;
//	for (int i = 0; i < n; i++) {
//		string s;
//		cin >> s;
//		v.push_back(s);
//	}
//
//	sort(v.begin(), v.end(), compare);
//	for (auto i : v)cout << i << '\n';
//}