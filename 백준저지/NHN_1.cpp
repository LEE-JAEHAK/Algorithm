//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//bool qkarr[28];
//int game[105];
//char player[28];
//char sulle;
//int ans[28];
//
//int main() {
//	int n, qk;
//	cin >> n >> qk;
//	for (int i = 0; i < qk; i++) {
//		char ch;
//		cin >> ch;
//		qkarr[ch - 'A'] = 1;
//	}
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> game[i];
//		game[i] %= (n - 1);
//	}
//	sulle = 'A';
//	ans[0] = 1;
//	for (int i = 0; i < n - 1; i++) {
//		player[i] = 'B' + i;
//	}
//	int loc = 0, go = loc + game[0];
//	for (int i = 0; i < m; i++) {
//		go = loc + game[i];
//		if (go < 0)go = n - 1 + go;
//		if (go > n)go = go - n + 1;
//		if (qkarr[player[go] - 'A'] != 1) {
//			ans[player[go] - 'A']++;
//			swap(sulle, player[go]);
//		}
//		else {
//			ans[sulle - 'A']++;
//		}
//		loc = go;
//	}
//	for (int i = 0; i < n - 1; i++) {
//		cout << player[i] << ' ' << ans[player[i] - 'A'] << '\n';
//	}
//	cout << sulle << ' ' << ans[sulle - 'A'];
//}