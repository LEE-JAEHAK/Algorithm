//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int parent[1005];
//
//int find(int x) {
//	if (parent[x] == x)return x;
//	else return parent[x] = find(parent[x]);
//}
//
//void merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return;
//	if (x < y)swap(x, y);
//	parent[x] = y;
//}
//
//int main() {
//	int t;
//	cin >> t;
//	while (t--) {
//		int n, m;
//		cin >> n >> m;
//		for (int i = 0; i <= n; i++)parent[i] = i;
//		bool flag = 1;
//		for (int i = 0; i < m; i++) {
//			int a, b;
//			cin >> a >> b;
//			if (find(a) == find(b)) {
//				flag = 0;
//			}
//			merge(a, b);
//		}
//		for (int i = 2; i <= n; i++) {
//			if (find(i) != find(i - 1)) {
//				flag = 0;
//			}
//		}
//		if (flag == 0)cout << "graph\n";
//		else cout << "tree\n";
//	}
//}