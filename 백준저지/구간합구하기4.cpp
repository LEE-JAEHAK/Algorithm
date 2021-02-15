//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//	int n, m;
//	cin >> n >> m;
//	vector<int> v;
//	v.push_back(0);
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		int no;
//		cin >> no;
//		sum += no;
//		v.push_back(sum);
//	}
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		cout << v[b] - v[a - 1] << '\n';
//	}
//}