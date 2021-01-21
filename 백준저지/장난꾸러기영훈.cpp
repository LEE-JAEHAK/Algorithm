//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//vector<int> v;
//
//int main() {
//	long long k;
//	string s;
//	cin >> s >> k;
//	for (int i = 0; i < s.length(); i++) {
//		if (s[i] == '1' || s[i] == '2' || s[i] == '6' || s[i] == '7') {
//			v.push_back(i);
//		}
//		if (s[i] == '6' || s[i] == '7') {
//			s[i] -= 5;
//		}
//	}
//	long long bit = k - 1;
//	if (k > (long long)1 << v.size() || k < 1) {
//		cout << -1;
//		return 0;
//	}
//	for (int i = v.size() - 1; i >= 0; i--) {
//		if (bit & 1) {
//			s[v[i]] += 5;
//		}
//		bit >>= 1;
//	}
//	cout << s;
//}