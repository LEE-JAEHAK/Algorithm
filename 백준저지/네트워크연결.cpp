//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int n, m;
//class Com {
//public:
//	int a, b, c;
//	bool operator <(const Com& other) {
//		return c < other.c;
//	}
//};
//vector<Com> v;
//int parent[1005];
//int find(int x) {
//	if (x == parent[x])return x;
//	else return parent[x] = find(parent[x]);
//}
//bool merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return 0;
//	parent[y] = x;
//	return 1;
//}
//int main() {
//	cin >> n >> m;
//	v.resize(m);
//	for (int i = 0; i < 1005; i++)parent[i] = i;
//	for (int i = 0; i < m; i++) {
//		cin >> v[i].a >> v[i].b >> v[i].c;
//	}
//	sort(v.begin(), v.end());
//	int sum = 0;
//	for (int i = 0; i < m; i++) {
//		if (merge(v[i].a, v[i].b))sum += v[i].c;
//	}
//	cout << sum;
//}