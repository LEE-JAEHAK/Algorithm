//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n;
//	while (1) {
//		cin >> n;
//		if (n == 0)break;
//		vector<int> v(n);
//		vector<int> vv(n);
//		for (int i = 0; i < n; i++) {
//			cin >> v[i];
//			if (i < 6) {
//				vv[i] = 1;
//			}
//			else {
//				vv[i] = 0;
//			}
//		}
//		do {
//			for (int i = 0; i < n; i++) {
//				if (vv[i] == 1) {
//					cout << v[i] << ' ';
//				}
//			}
//			cout << '\n';
//		} while (next_permutation(vv.begin(), vv.end(), greater<>()));
//		cout << '\n';
//	}
//}