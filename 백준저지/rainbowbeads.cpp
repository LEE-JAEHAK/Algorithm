//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	string s;
//	cin >> s; // VVRBVRBR
//	if (s.size() == 1) {
//		cout << 1;
//		return 0;
//	}
//	int cnt = 1, idx = 1, maxx = 1;
//	if (s[0] == 'V')idx++;
//	while (idx < n) {
//		if (s[idx] == 'V') { cnt = 1; idx++; continue; }
//		if (s[idx] == s[idx - 1]) { cnt = 1; idx++; continue; }
//		if (s[idx - 1] == 'V') { cnt = 1;idx++; continue; }
//		cnt++;
//		maxx = max(maxx, cnt);
//		idx++;
//	}
//	cout << maxx;
//}