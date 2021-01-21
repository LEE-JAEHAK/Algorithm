//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int fee[10005];
//int parent[10005];
//bool flag[10005];
////int ranks[10005];
//
//int find(int x) {
//	if (x == parent[x])return x;
//	else return parent[x] = find(parent[x]);
//}
//
//void merge(int x, int y) {
//	x = find(x);
//	y = find(y);
//	if (x == y)return;
//	if (fee[x] >= fee[y])swap(x, y);
//	parent[y] = x; fee[y] = fee[x];
//}
//
//int main() {
//	int n, m, k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)cin >> fee[i];
//	for (int i = 0; i <= n; i++) { parent[i] = i; }
//	for (int i = 0; i < m; i++) {
//		int a, b;
//		cin >> a >> b;
//		merge(a, b);
//	}
//	for (int i = 1; i <= n; i++) {
//		flag[find(i)] = 1;
//	}
//	int sum = 0;
//	for (int i = 1; i <= n; i++) {
//		if (flag[i] == 1) {
//			sum += fee[i];
//		}
//	}
//	if (sum <= k)cout << sum;
//	else cout << "Oh no";
//}