//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	int n;
//	cin >> n;
//	vector<int> v;
//	v.push_back(2);
//	v.push_back(3);
//	for (int i = 5; i <= n / 2 + 1; i++) {
//		for (int j = 2; j <= sqrt(i); j++) {
//			if (i % j == 0) {
//				goto a;
//			}
//		}
//		v.push_back(i);
//	a:;
//	}
//	for (auto i : v)cout << i << ' ';
//	cout << v.size();
//}