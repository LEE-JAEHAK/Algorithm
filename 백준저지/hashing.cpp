//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	string s;
//	cin >> s;
//	long long sum = 0;
//	long long r = 1;
//	for (int i = 0; i < s.size(); i++) {
//		long long no = s[i] - 'a' + 1;
//		sum += no * r % 1234567891;
//		r *= 31;
//		r %= 1234567891;
//	}
//	cout << sum % 1234567891;
//}