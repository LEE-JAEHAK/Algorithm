//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, m;
//class Node {
//public:
//	int a, b, c;
//	bool operator <(const Node& other) {
//		return c < other.c;
//	}
//};
//vector<Node> v;
//int parent[10005];
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
//	for (int i = 0; i <= n; i++)parent[i] = i;
//	for (int i = 0; i < m; i++) {
//		cin >> v[i].a >> v[i].b >> v[i].c;
//	}
//	sort(v.begin(), v.end());
//	int sum = 0, cnt = 0;
//	for (int i = 0; i < m; i++) {
//		if (merge(v[i].a, v[i].b)) {
//			cnt++;
//			sum += v[i].c;
//		}
//		if (cnt == n - 1)break;
//	}
//	cout << sum;
//}