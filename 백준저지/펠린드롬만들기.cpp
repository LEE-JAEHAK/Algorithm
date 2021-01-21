//#include <iostream>
//using namespace std;
//
//int arr[27];
//
//int main() { // 65 90
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.length(); i++) {
//		arr[s[i] - 65]++;
//	}
//	int sum = 0;
//	for (int i = 0; i < 26; i++) {
//		sum += arr[i];
//	}
//	int cnt = 0;
//	string ans;
//	if (sum % 2 == 0) { // Â¦¼ö°³ÀÏ¶§ 
//		for (int i = 0; i < 26; i++) {
//			if (arr[i] % 2 == 1) {
//				cout << "I'm Sorry Hansoo";
//				return 0;
//			}
//		}
//		for (int i = 0; i < 26; i++) {
//			for (int j = 0; j < arr[i] / 2; j++) {
//				ans.push_back(char(i+65));
//			}
//		}
//		for (int i = 25; i >= 0; i--) {
//			for (int j = 0; j < arr[i] / 2; j++) {
//				ans.push_back(char(i + 65));
//			}
//		}
//	}
//	else { // È¦¼ö°³ÀÏ¶§
//		for (int i = 0; i < 26; i++) {
//			if (arr[i] % 2 == 1) {
//				cnt++;
//			}
//		}
//		if (cnt > 1) {
//			cout << "I'm Sorry Hansoo";
//			return 0;
//		}
//		else { // AAABDBD    ->   ABDADBA
//			for (int i = 0; i < 26; i++) {
//				for (int j = 0; j < arr[i] / 2; j++) {
//					ans.push_back(char(i + 65));
//				}
//			}
//			for (int i = 0; i < 26; i++) {
//				if (arr[i] % 2 == 1) {
//					ans.push_back(char(i + 65));
//				}
//			}
//			for (int i = 25; i >= 0; i--) {
//				for (int j = 0; j < arr[i] / 2; j++) {
//					ans.push_back(char(i + 65));
//				}
//			}
//		}
//	}
//	cout << ans;
//}