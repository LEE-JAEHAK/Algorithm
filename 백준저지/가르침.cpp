//#include <iostream>
//#include <string>
//#include <bitset>
//#include <algorithm>
//using namespace std;
//
//int n, k;
//bool arr[30];
//string s[55];
//int maxi;
//
//void recur(int cnt, int idx) {
//	if (idx == 27)return;
//	if (cnt == k - 5) {
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			bool flag = 1;
//			for (int j = 0; j < s[i].length(); j++) {
//				if (arr[s[i][j] - 'a'] == 0) {
//					flag = 0;
//					break;
//				}
//			}
//			if (flag) {
//				ans++;
//			}
//		}
//		maxi = max(maxi, ans);
//		return;
//	}
//	if (arr[idx] == 0) {
//		arr[idx] = 1;
//		recur(cnt + 1, idx + 1);
//		arr[idx] = 0;
//	}
//	recur(cnt, idx + 1);
//}
//
//int main() { //97 122  a n t i c
//	arr['a' - 'a'] = 1; arr['c' - 'a'] = 1; arr['n' - 'a'] = 1; arr['t' - 'a'] = 1; arr['i' - 'a'] = 1;
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		string str;
//		cin >> str;
//		for (int j = 0; j < str.length(); j++) {
//			if (str[j] != 'a' && str[j] != 'n' && str[j] != 't' && str[j] != 'i' && str[j] != 'c') {
//				s[i].push_back(str[j]);
//			}
//		}
//	}
//	recur(0, 0);
//	cout << maxi;
//}