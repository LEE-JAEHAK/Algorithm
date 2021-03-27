//#include <bits/stdc++.h>
//using namespace std;
//
//bool prime(int x) {
//	for (int i = 2; i <= sqrt(x); i++) {
//		if (x % i == 0)return 0;
//	}
//	return 1;
//}
//
//bool palin(int x) {
//	string s = to_string(x);
//	string tmp = s;
//	reverse(s.begin(), s.end());
//	if (tmp == s)return 1;
//	else return 0;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	if (n == 1)n++;
//	while (1) {
//		if (prime(n) && palin(n)) {
//			cout << n;
//			break;
//		}
//		n++;
//	}
//}