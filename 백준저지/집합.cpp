//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
//	int m;
//	cin >> m;
//	int set = 0;
//	while (m--) {
//		string s;
//		cin >> s;
//		if (s == "add") {
//			int x;
//			cin >> x;
//			set = set | 1 << x - 1;
//		}
//		if (s == "remove") {
//			int x;
//			cin >> x;
//			set = set & ~(1 << x - 1);
//		}
//		if (s == "check") {
//			int x;
//			cin >> x;
//			if (set & 1 << x - 1)
//				cout << 1 << '\n';
//			else
//				cout << 0 << '\n';
//		}
//		if (s == "toggle") {
//			int x;
//			cin >> x;
//			set = set ^ 1 << x - 1;
//		}
//		if (s == "all") {
//			for (int i = 0; i < 20; i++) {
//				set = set | 1 << i;
//			}
//		}
//		if (s == "empty") {
//			set = 0;
//		}
//	}
//}