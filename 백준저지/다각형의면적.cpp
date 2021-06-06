//#include <bits/stdc++.h>
//using namespace std;
//
//struct info {
//	long long x, y;
//};
//
//info point[10001], org;
//
//long long ccw(info r, info p, info q) {
//	long long first = (p.x - r.x) * (q.y - r.y);
//	long long second = (p.y - r.y) * (q.x - r.x);
//	return first - second;
//}
//
//int main() {
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> point[i].x >> point[i].y;
//	}
//	org = point[0];
//	long long sum = 0;
//	for (int i = 1; i < n - 1; i++) {
//		long long res = ccw(org, point[i], point[i + 1]);
//		sum += res;
//	}
//	if (sum < 0)sum *= -1;
//	cout << sum/2;
//	if (sum % 2 == 0)cout << ".0";
//	else cout << ".5";
//}